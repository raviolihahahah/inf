#include <iostream>
bool win(int s) {
	if((s < 260) && ((s + 5 >= 260) || (s + 7 >= 260) || (s * s >= 260))) 
		return true;
	else 
		return false;
}
bool loss(int s) {
	if((!win(s)) && (win(s + 5) && win(s + 7) && win(s * s)))
		return true;
	else
		return false;
}
bool predwin(int s) {
	if((!win(s)) && (loss(s + 5) || loss(s + 7) || loss(s * s)))
		return true;
	else
		return false;	
}
int main() {
	int count = 0;
	for(int s = 1; s <= 259; s++) {
		if(win(s + 5) && win(s + 7) && win(s * s))
			count++;
	}
	std::cout << count << '\n' << '\n';
	for(int s = 1; s <= 259; ++s) {
		if(loss(s + 5) || loss(s + 7) || loss(s * s))
			std::cout << s << '\n';
	}
	std::cout << '\n';
	for(int s = 1; s <= 259; s++) {
		if(predwin(s + 5) && predwin(s + 7) && predwin(s * s)) {
			std::cout << s;
			break;
		}
	}
}
