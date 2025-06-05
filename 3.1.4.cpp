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

    cout << "Bucle i = 1; i <= n; i += 2:" << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

