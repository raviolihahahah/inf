#include <iostream>
#include <string>
using namespace std;

int main() {
	int max = 0, count = 0;
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); ++i) {
		count++;
		if((s[i] == ' ') || (i == s.size() - 1)) {
			if(s[i] == ' ') count--;
			if(max < count) {
				max = count;
			}				
			count = 0;
		}
		cout << "count:" << count << '\n';
	}
	cout << max;
	return 0; 
}
