#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << " n ";
    cin >> n;

    vector<int> array(n);
    cout << "Ingresa los " << n << " numeros :\n";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int x;
    cout << "Que numero deseas buscar";
    cin >> x;

    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n && array[k + b] <= x) {
            k += b;
        }
    }

    if (array[k] == x) {
        cout << " numero encontrado en la posicion: " << k << endl;
    } else {
        cout << " numero NO encontrado." << endl;
    }

    return 0;
}

