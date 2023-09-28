#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    for (int i = 1; i <= 5; i++) v.push_back(i * 10);
    for (int i = 0; i < 5; i++) {
        cout << i << ": " << *(v.begin() + i) << '\n';
        cout << &*(v.begin() + i) << '\n';
    }
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << ' ';
    }
    cout << '\n';
    // for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
    //     cout << *i << ' ';
    // }
    cout << '\n';
    auto it = v.begin();
    advance(it, 3);
    cout << '\n';
    cout << *it << '\n';
}
