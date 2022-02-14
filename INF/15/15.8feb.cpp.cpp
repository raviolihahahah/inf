#include <iostream>

int main() {
	int a, x, y, z;
	bool OK = 1;
	for(a = 0; a <= 114; ++a) {
		OK = 1;
		for(x = 0; x <= 100; ++x) {
			for(y = 0; y <= 100; ++y) {
				for(z = 0; z <= 100; ++z) {
					OK = OK && (((x<10) && (y<7) && (z<17)) <= ((3*x + 2*y + 4*z) < a));
				}
			}
		}
		if(OK) 
			std::cout << a << '\n';
	}		
}
