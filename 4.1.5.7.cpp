#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if (a.size() == b.size())
        return a < b; 
    return a.size() < b.size(); 
}

int main() {
    vector<string> palabras;
    palabras.push_back("sol");
    palabras.push_back("escuela");
    palabras.push_back("arbol");
    palabras.push_back("casa");
    palabras.push_back("luz");
    palabras.push_back("libro");
    sort(palabras.begin(), palabras.end(), comp);

    cout << "Palabras ordenadas:\n";
    for (int i = 0; i < palabras.size(); i++) {
        cout << palabras[i] << " ";
    }

    return 0;
}

