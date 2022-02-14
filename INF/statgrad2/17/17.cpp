#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
	std::ifstream f;
	f.open("17.txt");
	int x, sum = 0, count = 0, k = 0, max = 0;
	double average;
	std::vector<int> v;
	while(!f.eof()) {
		f >> x;
		if(x % 2 != 0) {
			sum += x;
			count += 1;
		}
		v.push_back(x);
	}
	average = sum / count;
	for(int i = 1; i < v.size(); ++i) {
		if(v[i] % 5 == 0 || v[i - 1] % 5 == 0) {
			if(v[i] % 5 == 0) {
				if(v[i - 1] < average) {
					k++;
					if(v[i - 1] + v[i] > max) 
						max = v[i - 1] + v[i];
				}
			}else if(v[i - 1] % 5 == 0) {
				if(v[i] < average) {
					k++;
					if(v[i - 1] + v[i] > max) 
						max = v[i - 1] + v[i];
				}
			}
		}
	}
	std::cout << k << ' ' << max;
	f.close();
	return 0;
}
