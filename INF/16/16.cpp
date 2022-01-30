#include <iostream>
using namespace std;
int f(int n){
	if(n == 1) 
		return 1;
	else if(n % 3 == 0) 
		return f(n/3) - 1;
	else if(n % 3 != 0) 
		return f(n - 1) + 7;
}
int main() {
	int count = 0;
	for(int i = 1; i <= 100000; ++i) {
		if(f(i) == 35)
			count++;
	}
	cout << count;
	return 0;
}
