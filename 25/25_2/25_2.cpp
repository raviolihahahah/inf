#include <iostream>

int main() {
	int x, sum, mul;
	for(int i = 87921; i <= 88187; ++i) {
		x = i, sum = 0, mul = 1;
		while(x > 0) {
			sum += x % 10;
			mul *= x % 10;
			x /= 10;
		}
		if(sum % 14 == 0 and mul % 18 == 0 and mul != 0)
			std::cout << sum << ' ' << mul << '\n';
	}
	return 0;
}
