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
	
	for(int i = 0; i < g.size(); ++i) {
		for(int j = 1; j <= 101; ++j) {
			if(i + j < g.size()) {
				if((g[i] + g[j + i]) % 10 == 0) {
					count++;
					average = (g[i] + g[j + i])/2;
					if(average < min)
						min = average;
				}
			}
		}
	}
	long long ans = min;
	cout << count << ' ' << ans;
	return 0;
}
