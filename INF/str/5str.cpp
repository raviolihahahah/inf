#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s, snew;
    int count = 0;
    getline(cin, s);
    int n = s.find(' ');
    while(n > 0 && n != 1) {
        snew = s.substr(0, n);
        if(snew[0] == snew[n - 1])
			count++;
		s = s.substr(n + 1);
        n = s.find(' ');
    }
    if(s[0] == s[s.size() - 1]) count++;
	cout << count << '\n';
    return 0;
}
