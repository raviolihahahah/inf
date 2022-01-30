#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s, snew,  str = "";
    getline(cin, s);
    int n = s.find(' ');
    while(n > 0)
    {
        snew = s.substr(0, n);
        for(int i = 0; i < (snew.size())/2; ++i) {
			char temp = s[i];
			snew[i] = s[snew.size() - 1 - i];
			snew[snew.size() - 1 - i] = temp;
		}
		str += snew + " ";
		s = s.substr(n + 1);
        n = s.find(' ');
    }
    for(int i = 0; i < (s.size())/2; ++i) {	
		char temp = s[i];
		s[i] = s[s.size()- i - 1];
		s[s.size() - i - 1] = temp;
	}
	str += s;
	cout << str << '\n';
    return 0;
}
