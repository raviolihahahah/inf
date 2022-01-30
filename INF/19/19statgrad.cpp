#include <iostream>
using namespace std;
bool win(int h, int op) {
	if(h >= 34) 
		return false;
	if(op == 1) {
		if((h + 2 >= 34) || (2 * h >= 34))
			return true;
		else
			return false;
	} else if(op == 2) {
		if((h + 1 >= 34) || (2 * h >= 34))
			return true;
		else
			return false;
	} else if(op == 3) {
		if((h + 2 >= 34) || (h + 1 >= 34))
			return true;
		else
			return false;	
	}
}

bool loss(int h, int op) {
	if(h >= 34)
		return false;
	if(op == 1) {
		if(win(h + 2, 2) && win(2 * h, 3))
			return true;
		else
			return false;
	} else if(op == 2) {
		if(win(h + 1, 1) && win(2 * h, 3))
			return true;
		else
			return false;
	} else if(op == 3) {
		if(win(h + 2, 2) && win(1 + h, 1))
			return true;
		else
			return false;
	}
}

bool predwin(int h, int op) {
	if(h >= 41) 
		return false;
	if(op == 1) {
		if(loss(h + 2, 2) || loss(h * 2, 3))
			return true; 
		else 
			return false;
	} else if(op == 2) {
		if(loss(h + 1, 1) || loss(h * 2, 3))
			return true; 
		else 
			return false;
	} else if(op == 3) {
		if(loss(h + 2, 2) || loss(h + 1, 1))
			return true; 
		else 
			return false;
	}
}
int main() {
	for(int h = 1; h < 34; ++h) {
		if(win(h + 1, 1) && win(h + 2, 2) && win(2 * h, 3))
			cout << h << '\n';

	}
	cout << '\n';
	for(int h = 1; h < 34; ++h) {
		if(loss(h + 1, 1) || loss(h + 2, 2) || loss(2 * h, 3)) 
			cout << h << '\n';
	}
	cout << '\n';
	for(int h = 1; h < 34; ++h) {
		if((predwin(h + 1, 1) || win(h + 1, 1)) &&
			(predwin(h + 2, 2) || win(h + 2, 2)) &&
			(predwin(h * 2, 3) || win(h * 2, 3)))
			cout << h << '\n';
	} 
	return 0;
}	
