#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
	std::fstream f("27_A_1.txt");
	int max = 0, max_second = 0, x;
	std::vector<int> v;
	while(!f.eof()) {
		f >> x;
		if(x > max)
			max = x;
		else if(x > max_second) 
			max_second = x;
		v.push_back(x);
	}
	int dif = max - max_second;
	std::sort(v.begin(), v.end());
	for(int x: v) 
		std::cout << x << '\n';
	std::cout << max << ' ' << max_second;
	int d[v.size()];
	//for(int i = 0; i < v.size(); ++i) {
		//d[i] = 1;
		//for(int j = 0; j < i; ++j) {
			//if(v[i] - v[j] == dif)
				//d[i] = std::max(d[i], d[j] + 1);
		//}
	//}
	//int ans = d[0];
	//for(int i = 0; i < v.size(); ++i)
		//ans = std::max(ans, d[i]);
	//std::cout << ans << '\n';
	return 0;
}
