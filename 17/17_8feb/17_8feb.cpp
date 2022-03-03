#include <iostream>
#include <fstream>
#include <vector>
int main() {
	std::fstream f("17_1.txt");
	std::vector<int> v;
	int x, max = 0, m = 0, count = 0;
	while(!f.eof()) {
		f >> x;
		v.push_back(x);
	}
	for(int a: v) {
		if(a % 4 == 0 && a > max)
			max = a;
	}
	for(int i = 1; i < v.size(); ++i) {
		if((v[i] % 6 == 0 || v[i - 1] % 6 == 0) 
		&& (v[i] * v[i - 1] <= max)) {
			count++;
			if(v[i] * v[i - 1] > m)
				m = v[i] * v[i - 1];
		}
	}
	std::cout << count << ' ' << m;	
}
