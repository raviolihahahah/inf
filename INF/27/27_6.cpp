#include <iostream>
#include <vector>

int main() {
	int n, i, ans = 0;
	std::cin >> n;
	int a[60];
	int b[60];
	for(int i = 0; i < 60; ++i) {
		b[i] = 0;
		a[i] = 0;
	}
	while(n) {
		int x;
		std::cin >> x;
		if(x > 80) {
			i = x % 60;
			b[i]++;
			ans += a[i];
		} else {
			i = x % 60;
			a[i]++;
			ans += b[i];
		}
		--n;
	}
	std::cout << ans;
}
