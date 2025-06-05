#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    vector<int> a(n);
    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Ingrese el numero a buscar: ";
    cin >> x;

    bool ok = false; 
    for (int i = 0; i < n; i++) { 
        if(a[i] == x) {
            ok = true; 
            break;
        } 
    }

    if(ok)
        cout << "El numero " << x << " si esta en el arreglo.\n";
    else
        cout << "El numero " << x << " no esta en el arreglo.\n";

    return 0;
}

