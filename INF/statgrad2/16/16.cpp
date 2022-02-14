#include <iostream>
#include <cmath>
using namespace std;
int f(int n){
	if(n == 0) 
		return 0;
	else if(n % 2 == 0) 
		return f(n/2);
	else if(n % 2 != 0) 
		return f(n - 1) + 1;
}
int main() {
	int count = 0;
	for(int i = 0; i < 1000000000; ++i) {
		if(f(i) == 3)
			count++;
	}
	std::cout << count;
	return 0;
}
