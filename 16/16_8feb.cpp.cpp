#include <iostream>
#include <cmath>
using namespace std;
int f(int n){
	if(n < 3) 
		return n;
	else if(n % 2 == 0) 
		return f(n - 3) + pow(2, n);
	else if(n % 2 != 0) 
		return 2 * f(n - 1);
}
int main() {
	cout << f(15);
	return 0;
}
