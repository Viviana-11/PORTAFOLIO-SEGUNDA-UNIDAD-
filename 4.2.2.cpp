#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;
bool comparar(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    pair<int, int> eventos[] = {
        make_pair(1, 3),
        make_pair(2, 5),
        make_pair(4, 7),
        make_pair(6, 9),
        make_pair(8, 10)
    };
    int n = 5;
    sort(eventos, eventos + n, comparar);

    int fin = 0, cont = 0;
    pair<int, int> seleccionados[MAX]; 

    for (int i = 0; i < n; i++) {
        if (eventos[i].first >= fin) {
            seleccionados[cont] = eventos[i];
            fin = eventos[i].second;         
            cont++;
        }
    }
    cout << "Maximo numero de eventos: " << cont << endl;
       cout << "Eventos elegidos:\n";
    for (int i = 0; i < cont; i++) {
        cout << seleccionados[i].first << " " << seleccionados[i].second << endl;
    }

    return 0;
}

