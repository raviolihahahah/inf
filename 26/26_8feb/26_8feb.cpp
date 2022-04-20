#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
 	std::ifstream f("26_1.txt");
 	std::vector<int> v;
 	int n;
 	f >> n;
 	std::vector<int> vec(n, 0);
 	int x, y, count = 0;
 	while(!f.eof()) {
		f >> x;
		f >> y;
		if(abs(y - x) <= 1) {
			vec[x]++;
			count++;
		}
	}
	auto max = std::max_element(vec.begin(),vec.end());
	std::cout << count << ' ' << std::distance(vec.begin(), max)	;
	return 0;
}
