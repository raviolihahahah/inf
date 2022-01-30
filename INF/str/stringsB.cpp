#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, snew;
	int n;
	getline(cin, s); 
	n = s.find('/');
	while(n >= 0) {
		snew = s.substr(0, n);
		cout << snew << std::endl;
		s = s.substr(n + 1);
		n = s.find('/');
	}
	return 0;
}
