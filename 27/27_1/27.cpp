#include <iostream>
#include <vector>
#include <fstream>
int main() {
	std::ifstream f("27_A_v1.txt");
	int n, x, q = 0;
	f >> n;
	std::vector<int> v(n, 0);
	std::vector<int> v1(n, 0);
	std::vector<int> v2(n, 0);
	for(int i = 0; i < n; ++i) {
		if(i != 0) {
			v[i] = v[i - 1];
			v1[i] = v1[i - 1];
			v2[i] = v2[i - 1];  
		}
		f >> x;
		if(i >= 9) {
			if(x % 38 == 0) {
				q += i - 9 + 1;
			} else {
				q += v[i - 9];
			}
			if(x % 19 == 0 && x % 38 != 0) {
				q += v1[i - 9];
			}
			if(x % 2 == 0 && x % 38 != 0)	 {
				q += v2[i - 9];
			}
		}
		if(x % 38 == 0) {
			v[i]++;
		}
		else if(x % 2 == 0 && x % 38 != 0) {
			v1[i]++;
		}
		else if(x % 19 == 0 && x % 38 != 0) {
			v2[i]++;
		}
	}
	std::cout << q;
	return 0;
}
		
				
				
