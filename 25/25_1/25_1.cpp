#include <iostream>

int main() {
	int x, count = 0;
	for(int i= 23220; i <= 30764; ++i) {
		count = 0;
		x = i;
		if(x % 100 == 18) {
			while(x > 0) {
				if(x % 8 == 5)
					count++;
				x /= 8;
			}
		}
		if(count >= 2)
			std::cout << i << ' ' << count << '\n';
	}
	return 0;
}
