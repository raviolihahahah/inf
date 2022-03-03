#include <bits/stdc++.h>
 
int main() {
    std::ifstream f("24.txt");
    char x;
    int count = 0; max = 0
    std::vector<char> v;
    while(!f.eof()) {
        f >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size - 1; i++) {
        if(v[i] == 'A' && v[i + 1] == 'B')
            count += 2;
        else {
            if(count > max)
                max = count;
            count = 0;
        } 
    }
}
 
