#include <iostream>
#include <string>
#include <fstream>
using namespace std;

main() {
	int max = 0, count = 0, sum = 0, prev;
	string s;
	ifstream f;
	f.open("17.txt");
	getline(f, s);
	if(stoi(s) % 3 == 0) {
        count++;
        sum += stoi(s);
	}
	prev = stoi(s);
	while(!f.eof()) {
		string str;
		getline(f, str);
		if(stoi(str) % 3 == 0) {
            count++;
		}
		if(prev % 3 == 0 || stoi(str) % 3 == 0) {
            sum += stoi(str);
		}
		if(sum > max) {
            max = sum;
		}
		sum -= prev;
		prev = stoi(str);
	}
	cout << count;
	f.close();
}
