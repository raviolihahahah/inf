#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, str;
    int count = 0;
    int new1;
    getline(cin, s);
    int n = s.find(" ");
    if(n == 0) {
		s = s.substr(n + 1);
		n = s.find(" ");
	}
    while(n > 0) {
        str = s.substr(0, n);
        if(str != " ")
            count++;
        s = s.substr(n + 1);
        new1 = s.find(" ");
        while(new1 == n + 1) {
			cout << "YES";
            n = new1;
            s = s.substr(n + 1);
            new1 = s.find(" ");
        }
        n = new1;
    }
    count++;
    cout << count;
    return 0;
}
