#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<int, int>> tareas;
    tareas.push_back(make_pair(4, 2));   // A
    tareas.push_back(make_pair(3, 10));  // B
    tareas.push_back(make_pair(2, 8));   // C
    tareas.push_back(make_pair(4, 15));  // D

    // Ordenar por duración (de menor a mayor)
    sort(tareas.begin(), tareas.end());

    long long tiempo_actual = 0;
    long long puntuacion_total = 0;

    for (int i = 0; i < tareas.size(); i++) {
        int duracion = tareas[i].first;
        int limite = tareas[i].second;

        tiempo_actual += duracion;
        puntuacion_total += limite - tiempo_actual;
    }

    cout << "Puntuación total: " << puntuacion_total << endl;
    return 0;
}

