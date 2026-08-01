#include <bits/stdc++.h>
using namespace std;

void priority_queue() {

    // Known as 'Max Heap'
    priority_queue<int> pq; // Largest value at top.
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.emplace(11);

    cout << pq.top(); // prints '11'
    pq.pop(); // removes '11'

    cout << pq.top(); // prints '10'

    // priority queue, which puts minimum value at the top:

    // Known as 'Min Heap'
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(6);
    pq.push(7);

    cout << pq.top(); // prints '5'

}