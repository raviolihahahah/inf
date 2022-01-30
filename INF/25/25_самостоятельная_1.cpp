#include <iostream>
#include <vector>
			
int main() {
	int n = 300000000;
	int count = 5, k, mul, max;
	std::vector<int> v;
	while(count) {
		v = {};
		k = 0, mul = 1;
		for(int i = 2; i * i <= n && k < 6; ++i) {
			if(n % i == 0) {
				max = i;
				mul *= i;
				k++;
				v.push_back(i);
			}
		}
		
		for(int i = 0; i < v.size(); ++i) {
			if(k < 5) {
				mul *= n / v[i];
				k++;
			} else {
				break;
			}
		}
				
		if(k == 5 && mul % 100 == 31 && mul < n) {
			std::cout << n << ' ' << max << ' ' << mul << '\n';
			count--;
		}
		n++;
	}
	return 0;
}
