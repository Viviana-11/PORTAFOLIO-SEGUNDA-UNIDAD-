#include <bits/stdc++.h>
using namespace std;

void f(int n) {
    if (n == 1) return;
    cout << n << " ";
    f(n - 1);
}

int main() {
    int n;
    cout << "Ingresa un valor para n: ";
    cin >> n;

    cout << "Llamada recursiva f(n): ";
    f(n);
    cout << endl;

    return 0;
}

