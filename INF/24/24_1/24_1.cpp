#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
main() {
    ifstream f;
    f.open("24_1.txt");
    string s;
    int ka, ke, count = 0;
    while(!f.eof()) {
        getline(f, s);
        ka = 0;
        ke = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A')
                ka++;
            if(s[i] == 'E')
                ke++;
        }
        if(ke > ka)
            count++;
    }
    cout << count;
    f.close();
}
