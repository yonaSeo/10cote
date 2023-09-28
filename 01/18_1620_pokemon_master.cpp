#include <bits/stdc++.h>
using namespace std;
int n, m;
string str;
map<string, int> mp1; // O(logN)
map<int, string> mp2; // O(logN)
// string arr[100004]; // O(1) : 크게 차이는 없음

int main(void) {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> str;
        mp1[str] = i;
        mp2[i] = str;
        // arr[i] = str;
    }
    while (m--) {
        cin >> str;
        if (atoi(str.c_str())) {
            cout << mp2[atoi(str.c_str())] << '\n';
            // cout << arr[atoi(str.c_str())] << '\n';
        } else {
            cout << mp1[str] << '\n';
        }
    }
    return 0;
}
