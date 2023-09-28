#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cout << i << ' ';
    }
    cout << '\n';

    for (int j = 0; j < m; j++) {
        cout << j << ' ';
    }
    cout << '\n';

    return 0;
}

// O(N^2 + M^2)
