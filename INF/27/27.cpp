#include <iostream>
 
int main() {
	int s = 20, n, x, q = 0;
	int d[s];
	for(int i = 1; i < s; ++i) {
		d[i] = 0;
	}
	std::cin >> n;
	while(n) {
		std::cin >> x;
		if(x < s) {
			for(int j = s - x; j > 0; --j) {
				q += d[j];
			}
			d[x]++;
		}
 
		n--;
	}
	std::cout << q;
}
