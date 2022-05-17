#include <bits/stdc++.h>
int main() {
    int n = 520001, s = 0, count = 5, k = 1, mx;
    std::string str;
    bool flag;
    while(count) {
        s = 0;
        flag = true;
        k = 1;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                if(k == 1)
                    mx = n / i;
                s += i;
                s += n / i;
                k--;
            }
        }
        str = std::to_string(s);
        for(int i = 0; i < str.size() / 2; i++) {
            if (str[i] != str[str.size() - 1 - i]) {
                flag = false;
                break;
            }

        }
        if(s / 10 == 0)
            flag = false;
        if(flag) {
            std::cout << n << ' ' << mx << '\n';
            count--;
        }
        n += 1;
    }
   return 0;
}
