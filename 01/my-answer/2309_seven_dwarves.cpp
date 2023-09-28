#include <bits/stdc++.h>
using namespace std;
vector<int> dwarves(9, 0), v, ans;
int n = 9, r = 7;

void combination(int start) {
    if (v.size() == r) {
        if (accumulate(v.begin(), v.end(), 0) == 100) {
            ans = v;
            return;
        }
    }
    for (int i = start + 1; i < n; i++) {
        v.push_back(dwarves[i]);
        combination(i);
        v.pop_back();
    }
}

int main(void) {
    for (int i = 0; i < 9; i++) scanf("%d", &dwarves[i]);
    combination(-1);
    sort(ans.begin(), ans.end());
    for (int e : ans) cout << e << '\n';
    return 0;
}
