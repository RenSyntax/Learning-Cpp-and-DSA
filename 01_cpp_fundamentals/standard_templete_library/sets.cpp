#include <bits/stdc++.h>
using namespace std;

void sets() {
    // set stores in Unique and Sorted order:
    // it follows log N, time complexity.

    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(3); // {1, 2, 3}
    st.insert(4); // {1, 2, 3, 4}
    st.emplace(4);  // {1, 2, 3, 4}

    auto it = st.find(3); // will return the itreator of 3
    auto it = st.find(6); // when 6 is not in set, then it will return 'st.end()'

    st.erase(3); // will remove 3 from set.

    int cnt = st.count(1); // value will be 1 if one is present in set, if not then value will be 0.

    auto it = st.find(2);
    st.erase(it); // you can also use itreator in erase function instead of element.

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // result = {1, 4}, st.erase(start, one element after the end).

}