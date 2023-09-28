#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n = 5;
    string a[10] = {"apple", "banana", "cat", "dragon", "egg"};

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                cout << a[i] << ' ' <<  a[j] << ' ' << a[k] << '\n';
            }
        }
    }
    return 0;
}
