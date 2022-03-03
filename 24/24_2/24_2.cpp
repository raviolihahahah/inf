#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

main() {
	ifstream f;
	f.open("24_2.txt");
	int max =  0;
	string s;
	int a[26];
	for(int i = 0; i < 27; ++i) {
		a[i] = 0;
	}
	while(!f.eof()) {
		getline(f, s);
		for(int i = 1; i < s.size(); ++i) {
			if(s[i - 1] == 'A') {
				a[int(s[i]) - 65]++;
			}
		}
	}
	for(int i = 0; i < s.size(); ++i) {
		if(a[i] > max)
			max = i;
	}
	cout << char(max + 65);
}
				
