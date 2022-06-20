#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
int main() {
	std::ifstream f("27_A.txt");
	int n; f >> n;
	int x, s = 0;
	std::vector<int> v;
	for(int i = 0; i < n; i++) {
		f >> x;
		s += x;
	}
	int r = s % 87;
	std::cout << r << ' ' << s;
	return 0;
}
