#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
	vector<int> factors;
	int count = 4, n = 450001, x, M;
	while(count) {
		factors = {};
		x = n;
		if(!is_prime(x)) {	
			for(int i = 2; i*i <= x	; ++i) {
				while(x % i == 0) {
					factors.push_back(i);
					x /= i;
				}
			}
			if(x != 1) {
				factors.push_back(x);
			}
			M = (factors[factors.size() - 1] - factors[0]);
			if(M % 29 == 11) {
				count--;
				cout << n << ' ' << M << '\n';
			}
		}
		n++;
	}
	return 0;
}
