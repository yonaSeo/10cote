#include <bits/stdc++.h>
using namespace std;

vector<int> use_unique(vector<int> v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
}

vector<int> use_set(vector<int> v) {
    set<int> st;
    for (int e : v) st.insert(e);
    vector<int> nv;
    for (int e : st) nv.push_back(e);
    return nv;
}

int main(void) {
    vector<int> v;
    int n = 10;
    for (int i = 1; i < n; i++) {
        v.push_back(i);
        v.push_back(n - i);
    }

    v = use_unique(v);
    // v = use_set(v);
    for (int e : v) cout << e << ' ';
    cout << '\n';

    return 0;
}
