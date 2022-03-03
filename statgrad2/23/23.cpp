#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n = 300000001;
	int count = 5;
	std::vector<int> v;
	while(count) {
		v = {};
		for(int i = 2; (i * i <= n) && v.size() < 5; ++i) {
			if(n % i == 0) {
				v.push_back(n / i);
			}
		}
		if(v.size() < 5) {
			for(int i = v.size() - 1; (i >= 0) && v.size() < 5; --i) {
					v.push_back(n / v[i]);
			}
		}
		if(v.size() == 5) {
			std::sort(v.begin(), v.end());
			std::cout << v[0] << '\n';
			count--;
		}
		n++;
	}
	return 0;
}
