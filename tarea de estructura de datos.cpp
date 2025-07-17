#include <iomanip> 

void test(int n, const string& estructura) {
    vector<int> datos;
    for (int i = 0; i < n; i++) datos.push_back(rand());

    auto start = high_resolution_clock::now();
    auto end = start;
    double insertTime = 0, searchTime = 0, deleteTime = 0, updateTime = 0;

    if (estructura == "pila") {
        stack<int> s;
        start = high_resolution_clock::now();
        for (int i : datos) s.push(i);
        end = high_resolution_clock::now();
        insertTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        stack<int> tmp = s;
        while (!tmp.empty()) {
            if (tmp.top() == datos[n / 2]) break;
            tmp.pop();
        }
        end = high_resolution_clock::now();
        searchTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        for (int i = 0; i < n; i++) s.pop();
        end = high_resolution_clock::now();
        deleteTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        stack<int> nueva;
        for (int i = 0; i < n; i++) nueva.push(i + 1);
        end = high_resolution_clock::now();
        updateTime = duration<double>(end - start).count();
    }
    else if (estructura == "cola") {
        queue<int> q;
        start = high_resolution_clock::now();
        for (int i : datos) q.push(i);
        end = high_resolution_clock::now();
        insertTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        queue<int> tmp = q;
        while (!tmp.empty()) {
            if (tmp.front() == datos[n / 2]) break;
            tmp.pop();
        }
        end = high_resolution_clock::now();
        searchTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        for (int i = 0; i < n; i++) q.pop();
        end = high_resolution_clock::now();
        deleteTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        queue<int> nueva;
        for (int i = 0; i < n; i++) nueva.push(i + 2);
        end = high_resolution_clock::now();
        updateTime = duration<double>(end - start).count();
    }
    else if (estructura == "lista") {
        list<int> l;
        start = high_resolution_clock::now();
        for (int i : datos) l.push_back(i);
        end = high_resolution_clock::now();
        insertTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        auto it = find(l.begin(), l.end(), datos[n / 2]);
        end = high_resolution_clock::now();
        searchTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        l.remove(datos[n / 2]);
        end = high_resolution_clock::now();
        deleteTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        for (auto& x : l) x += 1;
        end = high_resolution_clock::now();
        updateTime = duration<double>(end - start).count();
    }
    else if (estructura == "arbol") {
        Node* root = nullptr;
        start = high_resolution_clock::now();
        for (int i : datos) root = insertTree(root, i);
        end = high_resolution_clock::now();
        insertTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        searchTree(root, datos[n / 2]);
        end = high_resolution_clock::now();
        searchTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        root = deleteTree(root, datos[n / 2]);
        end = high_resolution_clock::now();
        deleteTime = duration<double>(end - start).count();

        start = high_resolution_clock::now();
        root = deleteTree(root, datos[n / 3]);
        root = insertTree(root, datos[n / 3] + 1);
        end = high_resolution_clock::now();
        updateTime = duration<double>(end - start).count();
    }

    // Mostrar resultados en tabla
    cout << "\nEstructura: " << estructura << " (n = " << n << ")\n";
    cout << "---------------------------------------------------------\n";
    cout << left << setw(15) << "Operación"
         << setw(20) << "Tiempo (segundos)" << "\n";
    cout << "---------------------------------------------------------\n";
    cout << setw(15) << "Inserción"     << setw(20) << insertTime << "\n";  
    cout << setw(15) << "Búsqueda"      << setw(20) << searchTime << "\n";
    cout << setw(15) << "Eliminación"   << setw(20) << deleteTime << "\n";
    cout << setw(15) << "Actualización" << setw(20) << updateTime << "\n";

    // Guardar CSV
    ofstream file(estructura + "_tiempos.csv");
    file << "operacion,tiempo\n";
    file << "insercion," << insertTime << "\n";
    file << "busqueda," << searchTime << "\n";
    file << "eliminacion," << deleteTime << "\n";
    file << "actualizacion," << updateTime << "\n";
    file.close();
}
