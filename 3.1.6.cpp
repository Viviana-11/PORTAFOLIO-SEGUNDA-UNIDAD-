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

    cout << "Doble bucle i y j de 1 a n:" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    return 0;
}

