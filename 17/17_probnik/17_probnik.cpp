#include <iostream>
#include <fstream>
#include <vector>
int main() {
	std::ifstream f("17.txt");
	int x, max = 0;
	std::vector<int> v;
	while(!f.eof()) {
		f >> x;
		if(x % 11 == 0 && x > max)
			max = x;
		v.push_back(x);
	}
	std::cout << max << '\n';
	int count = 0, mx = 0;
	for(int i = 0; i < v.size() - 1; ++i) {
		if(v[i] % 11 == 0 || v[i + 1] % 11 == 0)  {
			if(v[i] + v[i + 1] <= max) {
				std::cout << v[i] << ' ' << v[i + 1] << '\n';
				count++;
				if(v[i] + v[i + 1] > mx)
					mx = v[i] + v[i + 1];
			}
		}
	}
	std::cout << count << ' ' << mx;	
}
