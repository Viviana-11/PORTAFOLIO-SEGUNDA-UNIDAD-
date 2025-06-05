#include <bits/stdc++.h>
using namespace std;

void g(int n) {
    if (n == 1) {
        cout << "1 ";
        return;
    }
    cout << n << " ";
    g(n - 1);
    g(n - 1);
}

int main() {
    int n;
    cout << "Ingresa un valor para n : ";
    cin >> n;

    cout << "Llamadas recursivas g(n): ";
    g(n);
    cout << endl;

    return 0;
}

