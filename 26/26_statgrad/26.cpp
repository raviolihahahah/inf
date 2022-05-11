#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
int main() {
	std::ifstream f("26.txt");
	int n, a, b, mx = 0, ln, k, temp, count, row;
	bool flag = false;
	f >> n;
	std::vector<std::vector<int>> arr(10000);
	for(int i = 0; i < 10000; i++)
		for(int j = 0; j < 10000; j++) 
			arr[i].push_back(0);
	for(int i = 0; i < n; i++) {
		f >> a;
		f >> b;
		arr[a - 1][b - 1] = 1;
	}
	for(int i = 0; i < 10000; i++) {
		count = 0;
		for(int j = 0; j < 10000; j++) {
			if(arr[i][j] == 1) {
				count++;
				if(!flag) {
					ln = j;
					flag = true;
				}
			} else if(count > mx) {
				mx = count;
				count = 0;
				k = std::min({ln, 10000 - j, i, 10000 - i});
				flag = false;
				row = i;
			} else if(count == mx) {
				count = 0;
				temp = std::min({k, ln, 10000 - j, i, 10000 - i});
				if(temp != k) {
					row = i;
					k = temp;
				}
				flag = false;
			}
		}
	}	
	std::cout << row << ' ' << k;
	return 0;
}
