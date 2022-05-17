#include <iostream>

using namespace std;

int main()
{
    int s = 0, count = 0;
    for(int n = 2; n < 30001; n++) {
        s = 0;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                if(i != n / i)
                    s += i + n / i;
                else
                    s += i;
            }
        }
        s += 1;
        if(n > s)
            count++;
    }
    std::cout << count;
    return 0;
}
