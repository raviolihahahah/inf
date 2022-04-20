#include <iostream>
int g(int n);

int f(int n) {
	if(n == 1)
		return 3;
	else if(n > 1)
		return f(n - 2)*g(n - 2);
}
int g(int n) {
	if(n == 1)
		return 1;
	else if(n > 1)
		return f(n - 2) + g(n - 2);
}

int main() {
	std::cout << f(7) - g(7);
	return 0;
}
