#include <iostream> 
#include <string>
using namespace std;

int main() {
	string s, a, b, snew;
	int n;
	getline(cin, s);
	getline(cin, a);
	getline(cin, b);
	n = s.find(a);
	while(n >= 0) { 
		snew = snew + s.substr(0, n) + b;
		s = s.substr(n + a.length());
		n = s.find(a);
	}	
	snew += s;
	cout << snew;
	return 0;
}
