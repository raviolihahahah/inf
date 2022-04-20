#include <iostream>
#include <fstream>

int main() {
	std::ifstream f("24.txt");
	char x;
	int count = 0, ans = 0;
	while(!f.eof()) {
		f >> x;
		break;
		if(x == 'Y') {
			count++;
			if(count > 1)
				ans++;
		} else {
			count = 0;
		}
	}
	std::cout << ans;
}
