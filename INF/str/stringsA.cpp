#include <iostream>
#include <string>	
using namespace std;

int main() {
	string s, snew = " ";
	int n;
	getline(cin , s);
	n = s.find(' ');
	snew = s[0];
	snew += ".";
	s = s.substr(n + 1);
	n = s.find(' ');
	snew += s[0];
	snew += ". ";
	snew += s.substr(n + 1);
	cout << snew;
	return 0;
}
