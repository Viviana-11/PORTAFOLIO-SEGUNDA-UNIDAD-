#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    int n = 3;

    a++;
    b++;
    c = a + b;
    cout << "Base: a=" << a << " b=" << b << " c=" << c << endl;

    cout << "Bucle hasta 3*n:" << endl;
    for (int i = 1; i <= 3 * n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

