#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 2, c;
    int n, m;

    cout << "Ingresa el valor de n: ";
    cin >> n;
    cout << "Ingresa el valor de m: ";
    cin >> m;

    a++;
    b++;
    c = a + b;
    cout << "Base: a=" << a << " b=" << b << " c=" << c << endl;

    cout << "Doble bucle i=1..n y j=1..m:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    return 0;
}

