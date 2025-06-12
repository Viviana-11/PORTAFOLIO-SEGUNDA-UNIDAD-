#include <bits/stdc++.h>
using namespace std;

int main() {
    // Lista de pares {tiempo, tipo de evento}
    // tipo: +1 para llegada, -1 para salida
    vector<pair<int, int>> eventos;

    // Ejemplo con 4 clientes: A, B, C y D
    // Cliente A: 1–5
    // Cliente B: 2–6
    // Cliente C: 4–7
    // Cliente D: 5–8
    eventos.push_back({1, +1}); // A llega
    eventos.push_back({5, -1}); // A se va
    eventos.push_back({2, +1}); // B llega
    eventos.push_back({6, -1}); // B se va
    eventos.push_back({4, +1}); // C llega
    eventos.push_back({7, -1}); // C se va
    eventos.push_back({5, +1}); // D llega
    eventos.push_back({8, -1}); // D se va

    // Ordenamos los eventos:
    // Si hay empate en el tiempo, los "-1" (salidas) deben ir después de los "+1" (llegadas)
    sort(eventos.begin(), eventos.end());

    int clientes = 0;
    int max_clientes = 0;

    // Barrido (sweep line)
    for (auto e : eventos) {
        clientes += e.second;
        max_clientes = max(max_clientes, clientes);
    }

    cout << "Máximo número de clientes simultáneos: " << max_clientes << endl;

    return 0;
}

