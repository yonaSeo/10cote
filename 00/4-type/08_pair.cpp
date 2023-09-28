#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<pair<int, int>> v;
    for (int i = 1; i <= 5; i++) {
        v.push_back({i, i * 11});
    }
    for (pair<int, int> it : v) {
        cout << it.first << ": " << it.second << '\n';
    }
    cout << '\n';
    for (auto it : v) {
        cout << it.first << ": " << it.second << '\n';
    }
    return 0;
}
