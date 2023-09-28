#include <bits/stdc++.h>
using namespace std;

void rotate_left_90(vector<vector<int>> &key) {
    int n = key.size();
    int m = key[0].size();
    vector<vector<int>> temp(m, vector<int>(n, 0)); // 90 회전이므로 n, m 바뀜

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = key[j][m - (i + 1)];
        }
    }
    key.resize(m);
    key[0].resize(n);

    key = temp;
}

void rotate_right_90(vector<vector<int>> &key) {
    int n = key.size();
    int m = key[0].size();
    vector<vector<int>> temp(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = key[n - (j + 1)][i];
        }
    }
    key.resize(m);
    key[0].resize(n);

    key = temp;
}

int main(void) {
    vector<vector<int>> a = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3}
    };
    rotate_right_90(a);
    rotate_right_90(a);
    for (auto e1 : a) {
        for (auto e2 : e1) {
            cout << e2 << ' ';
        }
        cout << '\n';
    }
    cout << "============\n";
    rotate_left_90(a);
    for (auto e1 : a) {
        for (auto e2 : e1) {
            cout << e2 << ' ';
        }
        cout << '\n';
    }
    return 0;
}
