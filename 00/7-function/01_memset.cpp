#include <bits/stdc++.h>
using namespace std;

const int max_n = 1004;
int a1[max_n];
int a2[max_n][max_n];

int main(void) {
    memset(a1, -1, sizeof(a1));
    memset(a2, -1, sizeof(a2));
    for (int i = 0; i < 10; i++) cout << a1[i] << " ";
    cout << "\n\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << a2[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
