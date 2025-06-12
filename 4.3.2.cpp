#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 4, 6, 9, 11, 15};
    int n = sizeof(a) / sizeof(a[0]);

    int x;
    cout << "Ingresa el numero que deseas buscar: ";
    cin >> x;

    int k = -1;
    for (int b = n; b >= 1; b /= 2) {
        while (k + b < n && a[k + b] < x) {
            k += b;
        }
    }

    k++; 

    if (k < n) {
        cout << "Primer numero mayor o igual a " << x << " es " << a[k] << " en la posicion " << k << endl;
    } else {
        cout << "No hay ningun numero mayor o igual a " << x << endl;
    }

    return 0;
}

