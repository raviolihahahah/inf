#include <iostream>

int main() {
	int x, y, w, z;
	for(x = 0; x <= 1; ++x) 
		for(y = 0; y <= 1; ++y)
			for(w = 0; w <= 1; ++w)
				for(z = 0; z <= 1; ++z) {
					if((x != w) && (!x || y || z) && !y)
						std::cout << x << ' ' << y << ' ' << w << ' ' << z << '\n';
				}
	
}
