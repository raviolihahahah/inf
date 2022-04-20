#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <algorithm>
double abs(double x) {
	if(x >= 0)
		return x;
	else
		return -x;
}
int main() {
	std::ifstream f("26_v1.txt");
	int x, s, n;
	f >> s; f >> n;
	std::vector<int> v(10000, 0);
	for(int i = 0; i < n; ++i) {
		f >> x;
		v[x] = abs(52879/300 - x);
	}
	std::sort(v.begin(), v.end());
	return 0;
}
	
	
