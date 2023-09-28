#include <bits/stdc++.h>
using namespace std;

const int max_n = 100;
bool che[max_n + 1];

vector<int> era(int mx) {
    vector<int> v;
    for (int i = 2; i <= mx; i++) {
        if (che[i]) continue;
        for (int j = i * 2; j <= mx; j += i) {
            che[j] = 1;
        }
    }
    for (int i = 2; i <= mx; i++)
        if (che[i] == 0) v.push_back(i);
    return v;
}

int main(void) {
    vector<int> v = era(max_n);
    for(int e : v) cout << e << ' ';
    cout << '\n';
    return 0;

}
