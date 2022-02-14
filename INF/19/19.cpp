#include <iostream>
using namespace std;

bool win(int heap1, int heap2) {
	if((heap1+heap2 < 65) && ((heap1+heap2 + 2 >= 65) || (2 * heap1+heap2 >= 65) || (heap1 + 2 * heap2 >= 65)))
		return true;
	else
		return false;
}

bool loss(int heap1, int heap2) {
	if (!win(heap1, heap2) && ( win(heap1 + 2, heap2) && win(heap1, heap2 + 2) && win(heap1 * 2, heap2) && win(heap1, heap2 * 2)))
		return true;
	else
		return false;
}

bool predwin(int heap1, int heap2) {
	if (!win(heap1, heap2) && ( loss(heap1 + 2, heap2) || loss(heap1, heap2 + 2) || loss(heap1 * 2, heap2) || loss(heap1, heap2 * 2)))
		return true;
	else
		return false;
}


int main() {
	int h = 5;
	for(int i = 1; i < 60; ++i) {
		if (win(h + 2, i) || win(h, i + 2) || win(2 * h, i) || win(h, 2 * i)) {
			cout << "19:" << ' ' << i << '\n';
			break;
		}
	}
	
	for(int i = 1; i < 60; ++i) {
		if (loss(h + 2, i) || loss(h, i + 2) || loss(2 * h, i) || loss(h, 2 * i)) {
			cout << "20:" << ' ' << i << '\n';
			break;
		}
	}
	for(int i = 1; i < 60; ++i) {
		if ((win(h + 2, i) || predwin(h + 2, i)) && 
		(win(2 * h, i) || predwin(2 * h, i)) &&
		(win(h, i + 2) || predwin(h, i + 2)) && 
		(win(h, 2 * i) || predwin(h, 2 * i))) {
			cout << "21:" << ' ' << i << '\n';
		}
	}
	return 0;
	
