#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string s;
	int count = 0, mx = 0;
	std::ifstream f("24.txt");
	getline(f, s);
	for(int i = 0; i < s.size() - 1; i++) {
		if(s[i] == s[i + 1]) {
			count += 2;
			i += 1;
		} else {
			if(count > mx)
				mx = count;
			count = 0;
		}
	}
	std::cout << mx;
	return 0;
}
