#include <bits/stdc++.h>
using namespace std;

void quene() {

    // Queue is like a line. FIFO: First in, first out.
    quene<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // last number + 5. It's 4 + 5 = 9.

    cout << q.back(); // Prints 9.
    cout << q.front(); // Prints 1.

    q.pop(); // Erases the front number. new = {2, 4}

    cout << q.front(); // Prints first number, '2'.

    // Syntax similar to vector, stack etc.... 
}