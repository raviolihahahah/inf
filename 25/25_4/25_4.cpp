#include <iostream>
int f(int n, int p, int x) {
	int count = 0;
	while(n > 0) {
		if(n % p == x)
			count++;
		n /= p;
	}
	return count;
}

int main() {
	for(int i = 340000; i <= 380000; i++) {
		if(f(i, 8, 5) == 1 && f(i, 16, 5) == 1 && f(i, 16, 13) == 3)
			std::cout << i << '\n';
	}
	return 0;
}
