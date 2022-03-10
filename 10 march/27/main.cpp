#include <bits/stdc++.h>
int main() {
	std::fstream f("27_A.txt");
	int x, n, max = 0;
	f >> n;
	std::vector<int> sq(10000, -1);
	std::vector<int> v;
	for(int i = 0; i < n; ++i) {
        f >> x;
        if(x % 441 == 0 && sq[x] == -1)
           sq[x] = i;
        v.push_back(x);
	}
	for(int i = 0; i < n; ++i) {
        x = v[i];
        if(x % 21 == 0 && x <= 100) {
            if(sq[x * x] > -1 && sq[x * x] < i)
                if((i - sq[x * x]) > max)
                    max = i - sq[x * x];
        }
	}
	std::cout << max;
	return 0;
}
