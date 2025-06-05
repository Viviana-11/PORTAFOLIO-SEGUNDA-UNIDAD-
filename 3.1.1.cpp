#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    int n = 3; 

    a++;    
    b++;    
    c = a + b;

    cout << "Base: a=" << a << " b=" << b << " c=" << c << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    return 0;
}

