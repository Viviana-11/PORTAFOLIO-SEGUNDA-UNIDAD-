#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int array[] = {3, 5, 2, 4, 1, 5};

    sort(array, array + n); 

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
        if (array[i] == array[i + 1]) {
            ok = false;
        }
    }

    if (ok)
        cout << "Todos los elementos son diferentes.\n";
    else
        cout << "Hay elementos repetidos en el array.\n";

    return 0;
}

