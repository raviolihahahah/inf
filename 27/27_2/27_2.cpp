#include <fstream>
#include <iostream>
#include <vector>

int main() {
	std::ifstream f("27_B_v2.txt");
	int n, x;
	int ans = 0;
	f >> n;
	std::vector<int>  v;
	for(int i = 0; i < n; i++) {
		f >> x;
		v.push_back(x);
		if(i >= 7) {
			for(int j = 0; j <= i - 7; j++)
				if((v[i]+ v[j]) % 17 == 0)
					ans++;
		}
	}
	std::cout << ans;
	return 0;
}
