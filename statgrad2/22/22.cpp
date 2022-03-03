#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
	std::ifstream f;
	f.open("22.txt");
	char x;
	int count = 0, k = 0, ans = 0;
	std::vector<int> v;
	while(!f.eof()) {
		f >> x;
		v.push_back(x);
	}
	for(int i = 0; i < v.size(); ++i) {
		if(v[i] == 'A') {
			if(k != 0) {
				if(count >= 10) 
					++ans;
				count = 0;
				k = 0;
			} else {
				count++;
				k++;
			}
		} else if(v[i] == 'B') {
			count = 0;
			k = 0;
		}
		if(k != 0)
			count++;
	}						
	std::cout << ans;
	return 0;
}
