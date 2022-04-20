#include <iostream>

int main() {
	int count = 5, num = 220000, sum = 0;
	while(count) {
		sum = 0;
		for(int i = 2; i * i < num; ++i) {
			if(num % i == 0) {
				sum = i + num / i;
				break;
			}
		}
		if(sum % 10 == 4) {
			std::cout << num << ' ' << sum << '\n';
			count--;
		}
		num++;
	}
	return 0;
}
