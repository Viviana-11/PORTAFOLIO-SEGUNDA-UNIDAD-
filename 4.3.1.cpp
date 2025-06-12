#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[] = {1, 3, 4, 5, 7, 8, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 5; 

    int a = 0, b = n - 1;
    bool encontrado = false;

    while (a <= b) {
        int k = (a + b) / 2;

        if (array[k] == x) {
            cout << "El numero " << x << " se encontro en la posicion " << k << ".\n";
            encontrado = true;
            break;
        }

        if (array[k] < x)
            a = k + 1;
        else
            b = k - 1;
    }

    if (!encontrado) {
        cout << "El numero " << x << " no esta en el arreglo.\n";
    }

    return 0;
}

