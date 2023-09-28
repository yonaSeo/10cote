#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int s[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            s[j][i] = v[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << s[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
