#include <bits/stdc++.h>
using namespace std;

void map() {
    // map requires, a key and value. key must be unique, value can be same.
    // key and value can be of any data type.

    map <int, int> mpp; // key(int), value(int)
    map <int, pair<int, int>> mpp; // key(int), value(pair)
    map <pair<int, int>, int> mpp; // key(pair), vlaue(int)

    mpp[1] = 2; // key(1) has value 2
    mpp.emplace({3, 1}); // key 3 has value 1
    mpp.insert({2, 4}); // key 2 has value 4
    mpp[{2, 3}] = 10; // key {2, 3} has value 10

    for (auto it : mpp) { // to print the key and the value.
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints zerp, since key 5 doesn't exists

    auto it = mpp.find(3); // memory location of {3, 1}
    cout << *(it).second; // prints 1

    auto it = mpp.find(5); // will just give mpp.end(). since key 5 doesn't exists.


}