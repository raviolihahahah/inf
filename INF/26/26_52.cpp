#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 	ifstream f("26_52.txt");
 	vector<int> v;
 	int x, a, b, count = 0;
 	double average, min = 1e9;
 	while(!f.eof()) {
		f >> x;
		v.push_back(x);
	}
	vector<int> g(v.begin(), v.end());
	sort(g.begin(), g.end());
	
	for(int i = 1; i < v.size(); ++i) {
		for(int j = 0; j < g.size(); ++j) {
			if(g[j] == v[i])
				a = j;
			if(g[j] == v[i - 1])
				b = j;
			if((a - b) * (a - b) <= 10201 && 
			(g[a] + g[b]) % 10 == 0) {
				count++;
				average = (g[a] + g[b]) / 2;
				if(average < min) min = average;
			}
		}
	}
	cout << count << ' ' << min;
	return 0;
}
