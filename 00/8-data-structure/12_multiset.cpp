#include <bits/stdc++.h>
using namespace std;

int main(void) {
    multiset<int> s;

    for (int i = 5; i >= 1; i--) {
        s.insert(i);
        s.insert(i);
    }
    for (int e : s) cout << e << ' ';
    cout << '\n';

    return 0;
}
