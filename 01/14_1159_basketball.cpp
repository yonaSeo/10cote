#include <bits/stdc++.h>
using namespace std;
int cnt[26], n;
string name, ret;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cnt[(int)(name[0] - 'a')]++;
    }
    for (int i = 0; i < 26; i++)
        if (cnt[i] >= 5) ret += (char)(i + 'a');
    if (ret.size()) cout << ret << '\n';
    else cout << "PREDAJA\n";
    return 0;
}
