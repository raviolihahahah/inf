#include <iostream>
int f(int n, int p) {
	int count = 0;
	while(n > 0) {
		if(n % p == 3) {
			count++;
		}
		n /= p;
	}
	return count;
}
int main() {
	for(int i = 9573; i <= 10213; i++) { 
		if(f(i, 8) == f(i, 16) && f(i, 8) != 0 && i % 10 == 3)
			std::cout << i << '\n';
	}
	return 0;
}
