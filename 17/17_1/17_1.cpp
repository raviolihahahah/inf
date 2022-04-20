#include <iostream>
#include <fstream>
#include <vector>
int main() {
	std::fstream f("17_v1_2.txt");
	std::vector<int> v;
	int x, min = 2001, s, count = 0;
	while(!f.eof()) {
		f >> x;
		v.push_back(x);
	}
	
	for(int i = 1; i < v.size() - 1; ++i) {
		if(v[i] % 5 == 0 && v[i + 1] % 5 == 0) {
			s = v[i] + v[i + 1];
			if(s < min)
				min = s;
			count++;
		}
	}
	std::cout << count << ' ' << min;
}
	
