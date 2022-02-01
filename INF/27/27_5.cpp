#include <iostream>

int main() {
	int left = 0. right = 0, n, count = 0,
	max = 0, maxF = 0;
	
	std::cin >> n;
	while(n) {
		if(x % 17 == 0) {
            if(x + max > left + right) {
                left = max;
                right = x;
                if(x > maxF)  
                    maxF = x;
            }
		} else {
            if(x + maxF > left + right) {
                left = maxF;
                right = x;
            }
        }
    if(x > max) {
        max = x;
    }
		n--;
	}
	
	std::cout << left + right << ' ' << 
	left << ' ' << right;
}
