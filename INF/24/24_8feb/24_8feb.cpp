#include <iostream>
#include <fstream>
#include <vector>
int main() {
	std::fstream f("24_1.txt");
	char x; 
	int count = 0, k = 0, max = 0;
	std::vector<int> v;
	while(!f.eof()) {
		f >> x;
		if(x != 'Z') {
			if(x == 'D') {
				if(k == 0) {
					k++;
					count++;
				} else {
					if(count > max)
						max = count;
					count = 0;
					k = 0;
				}
			} else {
				count++;
			}
		} else {
			if(count > max) 
				max = count;
			k = 0;
			count = 0;
		}
	}
	std::cout << max;
	return 0;
}
