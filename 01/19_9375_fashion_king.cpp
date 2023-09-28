#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;

int main(void) {
    cin >> t;
    while (t--) {
        map<string, int> mp;
        cin >> n;
        while (n--) {
            cin >> a >> b;
            mp[b]++;
        }
        long long ret = 1;
        for (auto e : mp) ret *= (long long)(e.second + 1); // +1: 해당 의상 미착용 경우 추가
        ret--; // 모든 의상 착용 안 한 경우 제외
        cout << ret << '\n';
    }
    return 0;
}
