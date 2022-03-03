#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream f;
	f.open("17.txt");
	int n = 0,k  = 0, x, sum = 0, max = 0;
	double average;
	vector<int> v;
	while(!f.eof()) {
		f >> x;
		if(x % 2 ==  0) {
			n++;
			sum += x;
		}
		v.push_back(x);
	}
	for(auto a: v) 
		cout << a << '\n';
	average = sum / n;
	for(int i = 0; i < v.size() - 1; ++i) {
		if((v[i] % 3 == 0 || v[i + 1] % 3 == 0) &&
		(v[i] < average ||  v[i + 1] < average)) {
			k++;
			if(v[i] + v[i + 1] > max) 
				max = v[i] + v[i + 1];
		}
	}
	cout << k << ' ' << max;
	f.close();
	return 0;
}
