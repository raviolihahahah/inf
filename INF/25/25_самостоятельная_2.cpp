#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n = 300000001;
	int count = 5, k, max;
	long long mul;
	std::vector<int> v;
	while(count) {	
		k = 0, mul = 1;
		for(int i = 2; i * i <= n && k < 5; ++i) {
			if(n % i == 0) {
				max = i;
				++k;
				mul *= i;
			}
		}
		if(k == 5) {
			if(mul % 100 == 31 && mul < n) {
				std::cout << n << ' ' << max << ' ' << mul << '\n';
				count--;
			}
		}
		n++;
	}
	return 0;
}
