#include <bits/stdc++.h>
int main() {
	std::fstream f("27_B_1.txt");
	int max = 0, max_second = 0, max_count = 0, x;
	std::vector<int> v;
	int n;
	f >> n;
	while(!f.eof()) {
		f >> x;
		if(x > max) {
			max_second = max;
			max = x;
		}
		v.push_back(x);
	}
	
	int dif = max - max_second;
	std::sort(v.begin(), v.end());
	std::vector<int> floor(dif, 0);
	std::vector<int> count(dif, 0);
	int ost;
	for(int i = 0; i < n; ++i) {
		ost = v[i] % dif;
		if(floor[ost] == 0) {
			floor[ost] = v[i];
			count[ost]++;
		}
		else if((v[i] - floor[ost]) == dif) {
			count[ost]++;
			floor[ost] = v[i];
		}
		else if((v[i] - floor[ost]) > dif) {
			floor[ost] = v[i];
			if(count[ost] > max_count)
				max_count = count[ost];
			count[ost] = 1;
		}
	}
	if(count[ost] > max_count)
		max_count = count[ost];
	std::cout << max_count;
	return 0;
}
