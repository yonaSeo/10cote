#include <bits/stdc++.h>
using namespace std;

vector<int> v1(5, 999);
vector<int> v2{111, 222, 333, 444};

int main(void) {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for (int e : v1) cout << e << ' ';
    cout << '\n';
    for (int e : v2) cout << e << ' ';
    cout << '\n';
    return 0;
}
