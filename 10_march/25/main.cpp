#include <bits/stdc++.h>

int main() {
    int k = 0, del;
    for(int i = 321654; i <= 654321; ++i) {
        k = 0;
        for(int j = 2; (j * j <= i) && (k < 71); ++j) {
            if((i % j) == 0) {
                if((j % 2) == 0)
                    break;
                if(j != (i / j)) {
                    k += 2;
                } else {
                    k++;
                }
                if(k <= 2)
					del = i / j;
            }
        }
        if(k > 70) {
            std::cout << i << ' ' << del << '\n';
        }
    }
    return 0;
}
