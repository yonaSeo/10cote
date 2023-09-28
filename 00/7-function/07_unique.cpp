#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {2, 3, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    for (int i : v) cout << i << ' ';
    cout << '\n';

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i : v) cout << i << ' ';
    cout << '\n';
}
