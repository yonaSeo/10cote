#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main(void) {
    vector<pair<int, int>> v;

    for (int i = 10; i >= 1; i--) v.push_back({i, 10 - i});
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) cout << i.first << ": " << i.second << '\n';
    cout << '\n';

    return 0;
}
