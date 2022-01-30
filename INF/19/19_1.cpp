#include <iostream>
using namespace std;

bool win(int heap1, int heap2) {
	if((heap1+heap2 < 41) && ((heap1+heap2 + 3 >= 41) || (2 * heap1+heap2 >= 41) || (heap1 + 2 * heap2 >= 41)))
		return true;
	else
		return false;
}

bool loss(int heap1, int heap2) {
	if (!win(heap1, heap2) && ( win(heap1 + 2, heap2 + 1) && win(heap1 + 1, heap2 + 2) && win(heap1 * 2, heap2) && win(heap1, heap2 * 2)))
		return true;
	else
		return false;
}

bool predwin(int heap1, int heap2) {
	if (!win(heap1, heap2) && ( loss(heap1 + 2, heap2 + 1) || loss(heap1 + 1, heap2 + 2) || loss(heap1 * 2, heap2) || loss(heap1, heap2 * 2)))
		return true;
	else
		return false;
}


int main() {
	int h = 8;
	for(int i = 1; i < 33; ++i) {
		if (win(h + 2, i + 1) || win(h + 1, i + 2) || win(2 * h, i) || win(h, 2 * i)) {
			cout << "19:" << ' ' << i << '\n';
			break;
		}
	}
	
	for(int i = 1; i < 33; ++i) {
		if (loss(h + 2, i + 1) || loss(h + 1, i + 2) || loss(2 * h, i) || loss(h, 2 * i)) {
			cout << "20:" << ' ' << i << '\n';
		}
	}
	for(int i = 1; i < 33; ++i) {
		if ((win(h + 2, i + 1) || predwin(h + 2, i + 1)) && 
		(win(2 * h, i) || predwin(2 * h, i)) &&
		(win(h + 1, i + 2) || predwin(h + 1, i + 2)) && 
		(win(h, 2 * i) || predwin(h, 2 * i))) {
			cout << "21:" << ' ' << i << '\n';
		}
	}
	return 0;
}


