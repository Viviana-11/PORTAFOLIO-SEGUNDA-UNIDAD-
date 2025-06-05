#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    vector<int> a(n + 1); 

    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Ingrese el numero a buscar: ";
    cin >> x;

    a[n] = x; 
    int i;
    bool ok = false;

    for (i = 0; a[i] != x; i++);

    if (i < n) ok = true;

    if (ok)
        cout << "El numero " << x << " si esta en el arreglo.\n";
    else
        cout << "El numero " << x << " si esta en el arreglo.\n";

    return 0;
}

