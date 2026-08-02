#include <bits/stdc++.h>
using namespace std;

void multiset() {
    // similar to set but only stores sorted order, does not follow the unique rule.

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // removes all '1'
    ms.erase(ms.find(1)); // only removes single one element
    ms.erase(ms.find(1), ms.find(1)+2); // result --> {1}, x.erase(start, one element after the end).

    // Rest all the functions are similar to set.
}