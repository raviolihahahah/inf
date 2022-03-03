#include <iostream>
using namespace std;
bool win(int h, int op) {
	if(h >= 21) 
		return false;
	if(op == 1) {
		if((h + 2 >= 21) || (2 * h >= 21))
			return true;
		else
			return false;
	} else if(op == 2) {
		if((h + 1 >= 21) || (2 * h >= 21))
			return true;
		else
			return false;
	} else if(op == 3) {
		if((h + 2 >= 21) || (h + 1 >= 21))
			return true;
		else
			return false;	
	}
}

bool loss(int h, int op, int op1) {
	if(op == 1) {
		if(win(h, 2) || win(h, 3))
			return false;
		else
			return true;
	} else if(op == 2) {
		if(win(h, 1) || win(h, 3))
			return false;
		else
			return true;
	} else if(op == 3) {
		if(win(h, 1) || win(h, 2))
			return false;
		else
			return true;	
	}
	if(op == 1) {
		if(win(h + 2, op1) && win(h * 2, op1))
			return true;
		else
			return false;
	} else if(op == 2) {
		if(win(h + 1, op1) && win(h * 2, op1))
			return true;
		else
			return false;
	} else if(op == 3) {
		if(win(h + 2, op1) && win(h + 1, op1))
			return true;
		else
			return false;	
	}
}

bool predwin(int h, int op) {
	if(win(h, 1) || win(h, 2) || win(h, 3)) 
		return false;
	if(loss(h + 1, op, 1) || loss(h + 2, op, 2) || loss(h * 2, op, 3))
		return true;
	else
		return false;
}
int main() {
	//for(int h = 1; h < 21; ++h) {
		//if(win(h + 1, 1) && win(h + 2, 2) && win(2 * h, 3))
			//cout << h << '\n';

	//}
	//cout << '\n';
	//for(int h = 1; h < 21; ++h) {
		//if(loss(h + 1, 1) || loss(h + 2, 2) || loss(2 * h, 3)) 
			//cout << h << '\n';
	//}
	cout << '\n';
	for(int h = 1; h < 21; ++h) {
		if((predwin(h + 1, 1) || win(h + 1, 1)) &&
			(predwin(h + 2, 2) || win(h + 2, 2)) &&
			(predwin(h * 2, 3) || win(h * 2, 3)) && (predwin(h * 2, 3) || predwin(h + 2, 2) || predwin(h + 1, 1)))
			cout << h << '\n';
	} 
	return 0;
}	
