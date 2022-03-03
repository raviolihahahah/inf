#include <iostream>

bool is_prime(int n) {
	for(int i = 2; i * i <= n; ++i) {
		if(n % i == 0) 
			return true;
	}
	return false;
}
int main() {
	int n = 800000, sum = 0, count = 5;
	while(count) {
		sum = 0;
		for(int i = 3; i * i <= n; ++i) {
			if(n % i == 0) {
				if(i % 10 == 3)
					sum += i;
				if((n / i) % 10 == 3)
					sum += n / i;
			}
		}
		if(is_prime(sum) && sum % 10 != 3) {
			std::cout << n << ' ' << sum << '\n';
			count--;
		}
		n++;
	}
}
