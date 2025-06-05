#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    int n;

    cout << "Ingresa el valor de n: ";
    cin >> n;

    a++;
    b++;
    c = a + b;
    cout << "Base: a=" << a << " b=" << b << " c=" << c << endl;

    cout << "Bucle hasta n+5:" << endl;
    for (int i = 1; i <= n + 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

