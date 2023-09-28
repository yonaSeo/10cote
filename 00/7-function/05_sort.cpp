#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a[5];
    vector<int> v;
    for (int i = 5; i >= 1; i--) a[i - 1] = i;
    for (int i = 5; i >= 1; i--) v.push_back(i);

    sort(a, a + 5);
    sort(v.begin(), v.end());

    for (int i : a) cout << i << ' ';
    cout << '\n';
    for (int i : v) cout << i << ' ';
    cout << '\n';

    sort(a, a + 5, greater<int>());
    sort(v.begin(), v.end(), greater<int>());
    for (int i : a) cout << i << ' ';
    cout << '\n';
    for (int i : v) cout << i << ' ';
    cout << '\n';

    sort(a, a + 5, less<int>());
    sort(v.begin(), v.end(), less<int>());
    for (int i : a) cout << i << ' ';
    cout << '\n';
    for (int i : v) cout << i << ' ';
    cout << '\n';
}
