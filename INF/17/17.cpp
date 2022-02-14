#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

main() {
	int max = 0, count = 0, prev = 0;
	string s;
	ifstream f;
	f.open("17_2.txt");
	getline(f, s);
	cout << s << '\n';
	prev = stoi(s);
	while(!f.eof()) {
		string str;
		getline(f, str);
		if((prev % 3 == 0 || stoi(str) % 3 == 0) && ((prev + stoi(str)) % 5 == 0)) {
            count++;
            if(prev + stoi(str) > max)
				max = prev + stoi(str);
		}
		prev = stoi(str);
	}
	cout << count << max;
	f.close();
}
