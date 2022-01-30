#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    char a = 'a';
    getline(cin, s);
    for(int i = 0; i < s.size() - 1; ++i) {
		if(s[i] == a) {
			s.insert(i + 1, 1, a);
		}
	}
	cout << s;
    return 0;
}



