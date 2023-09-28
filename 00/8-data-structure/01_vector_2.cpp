#include <bits/stdc++.h>
using namespace std;

vector<int> v {1, 2, 3};
vector<pair<int, int>> vp {{1, 100}, {3, 300}};

int main(void) {
    for (int e : v) cout << e << " ";
    cout << "\n";
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << "\n";

    // for (pair<int, int> e : vp) cout << e.first << ":" << e.second << " ";
    for (auto e : vp) cout << e.first << ":" << e.second << " ";
    cout << "\n";

    return 0;
}
