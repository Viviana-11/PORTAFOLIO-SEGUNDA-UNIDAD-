#include <bits/stdc++.h>
using namespace std;

// Devuelve el siguiente número en la secuencia de Collatz
int collatz(int n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return 3 * n + 1;
}

// Suma de todos los números del 1 al n
void test(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << "Suma del 1 al " << n << " es: " << s << "\n";
}

// Cuenta el total de bits en 1 de 1 hasta n
void contarBits(int n) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        c += __builtin_popcount(i);
    }
    cout << "Total de bits en 1 desde 1 hasta " << n << ": " << c << "\n";
}

int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;

    // Prueba de Collatz
    int siguiente = collatz(n);
    cout << "Siguiente numero en la secuencia de Collatz para " << n << " es: " << siguiente << "\n";

    // Prueba de suma
    test(n);

    // Prueba de conteo de bits
    contarBits(n);

    return 0;
}

