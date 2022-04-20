#include <iostream>
#include <fstream>
#include <vector>
int main() {
	std::fstream f("24_10.txt");
	char x;
	int count = 0, max = 0;
	std::vector<int> v;
	while(!f.eof()) {
        f >> x;
        if(x == 'E' || x == 'A') {
            if(count > max)
                max = count;
            count = 0;
        } else
            count++;
	}
	std::cout << max;
	return 0;
}
