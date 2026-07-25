#include <bits/stdc++.h>
using namespace std;

void stack() {

    // Remember: LIFO: last in, first out.
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // Prints '5'

    st.pop(); // Removes/erases the number on top. Top Old = 5, Top New = 3.

    st.size(); // Gives size of the stack: Currently = '4'

    cout << st.empty(); // Currently = false

    stack<int> st1, st2;
    st1.swap(st2); // It swaps st1 --> st2 content and st2 --> st1 content.
}