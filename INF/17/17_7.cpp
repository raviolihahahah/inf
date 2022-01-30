#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int F(int n) {
	int m = 0, k = 1;
	while(n > 0) {
		m += k * (n % 3);
		n = n / 3;
		k *= 10;
	}
	return m;
}

int main() {
	ifstream f;
	f.open("17_7.txt");
	int k = 0, x, sum = 0, min = 600;
	vector<int> v;
	while(!f.eof()) {
		f >> x;	
		v.push_back(x);
	}
	
	for(int i = 0; i < v.size() - 2; ++i) {
		if(F(v[i]) % 10 == 2) {
			k++;
			sum = v[i] + v[i + 1] + v[i + 2];
			if(sum < min) 
				min  = sum;
		}
	}
	cout << k << ' ' << min;
	f.close();
	return 0;
}

