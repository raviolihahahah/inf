#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, buf;
    int n , k, sum=0, znak=1;
    getline(cin, s);
    n = s.find('+');
    k = s.find('-');
    while(n >= 0 || k >= 0)
    {
        if (n < k && n>=0)
            buf = s.substr(0, n);
        else
        {
            if (k >= 0)
                buf = s.substr(0, k);
            else
                buf = s.substr(0, n);
        }
        sum += znak*stoi(buf);
        if (n < k && n>=0)
        {
            znak = 1;
            s = s.substr(n+1);
        }
        else
        {
            if (k >= 0)
            {
                znak = -1;
                s = s.substr(k+1);
            }
            else
            {
                znak = 1;
                s = s.substr(n+1);
            }
        }
        n = s.find('+');
        k = s.find('-');
    }
    sum += znak*stoi(s);
    cout << sum;
    return 0;
}
