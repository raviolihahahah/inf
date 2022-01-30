#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ifstream f("24_157.txt");
	vector<char> v;
	int max = 0, num;
	char x;
	while(!f.eof()) {
		f >> x;
		v.push_back(x);
	}

	int arr[26];
	for(int i = 0; i < 26; ++i) {
		arr[i] = 0;
	}
	for(int i = 1; i < v.size() - 1; ++i) {
		if(v[i] == v[i - 1])
			arr[int(v[i + 1]) -65]++;
	}
	for(int i = 0; i < 26; ++i) {
		if(arr[i] > max) {
			max = arr[i];
			num = i;
		}
	}
	cout << char(num + 65) << ' ' << arr[num];
	return 0;
}
