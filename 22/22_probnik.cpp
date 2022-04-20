#include <iostream>

int main() {
	int a, L, M, R, x;
	for(a = 0; a < 10000; ++a) {
		R = 9;
		L = 0;
		x = a;
		while(x >= R) {
			L += 1;
			x -= R;
		}
		M = x;
		if(M < L) {
			M = L;
			L = x;
		}
		if(L == 2 && M == 8) 
			std::cout << a ;
	}
	return 0;
}
