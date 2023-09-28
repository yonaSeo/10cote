#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    for (int i = 1; i <= 10; i++) v.push_back(i);
    for (int e : v) cout << e << ' ';
    cout << '\n';

    v.pop_back();
    for (int e : v) cout << e << ' ';
    cout << '\n';

    v.erase(v.begin(), v.begin() + 3);
    for (int e : v) cout << e << ' ';
    cout << '\n';
    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end()) cout << "100 not found!" << '\n';

    fill(v.begin(), v.end(), 10);
    for (int e : v) cout << e << ' ';
    cout << '\n';

    v.clear();
    cout << "clear vector..\n";
    for (int e : v) cout << e << ' ';
    cout << '\n';

    return 0;
}
