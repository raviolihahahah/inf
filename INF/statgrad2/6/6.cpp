#include <iostream>
using namespace std;

int main() {
	int s, n = 1;
	for(int i = -1000; i <= 1000; ++i) {
		s = i;
		n = 1;
		s = s / 7;
		while(s < 255) {
			if((s + n) % 2 == 0)
				s += 11;
			n = n + 5;
		}
		if(n == 96)
			cout << s << '\n'; 
	}
}
