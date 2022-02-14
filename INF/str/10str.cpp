#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    bool ans = true;
    for(int i = 0; i < s.size()/2; ++i) {
		if(s[i] != s[s.size() - i - 1]) {
			ans = false;
			break;
		}
	}
	if(ans)
		cout << "Y" << '\n';
	else
		cout << "N" << '\n';
		
    return 0;
}

