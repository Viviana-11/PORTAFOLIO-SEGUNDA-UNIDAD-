#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    cout << "Max-Heap:\n";
    cout << "Elemento mayor (top): " << q.top() << "\n"; // 7
    q.pop();
    cout << "Siguiente mayor (después del pop): " << q.top() << "\n"; // 5

    priority_queue<int, vector<int>, greater<int>> qmin;
    qmin.push(3);
    qmin.push(5);
    qmin.push(7);
    qmin.push(2);

    cout << "\nMin-Heap:\n";
    cout << "Elemento menor (top): " << qmin.top() << "\n"; // 2
    qmin.pop();
    cout << "Siguiente menor (después del pop): " << qmin.top() << "\n"; // 3

    return 0;
}

