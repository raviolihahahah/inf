#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n = 300000001;
	int count = 5, k = 0;
	std::vector<int> v;
	while(count) {
		k = 0;	
		v = {};
		for(int i = 2; (i * i <= n) && k < 5; ++i) {
			if(n % i == 0) {
				k += 1;
				v.push_back(i);
			}
		}
		if(k < 5) {
			for(int i = 0; (i < v.size()) && k < 5; ++i) {
				v.push_back(n / v[i]);
				k++;
			}
		}
		if(k == 5) {
			std::sort(v.begin(), v.end());
			std::cout << v[v.size() - 1] << '\n';
			count--;
		}
		n++;
	}
	return 0;
}
