#include <bits/stdc++.h>
using namespace std;
int n, loc, flag;
string pat, word;
vector<string> v;

void check(void) {
    loc = pat.find('*');
    for (int j = 0; j < loc; j++) {
        if (word[j] != pat[j]) {
            flag = 1;
            v.push_back("NE");
            break;
        }
    }
}

int main(void) {
    cin >> n;
    cin >> pat;
    loc = pat.find('*');
    for (int i = 0; i < n; i++) {
        flag = 0;
        cin >> word;
        if (word.size() < pat.size() - 1) {
            v.push_back("NE");
            continue;
        }
        check();
        if (!flag) {
            reverse(pat.begin(), pat.end());
            reverse(word.begin(), word.end());
            check();
        } else {
            continue;
        }
        reverse(pat.begin(), pat.end());
        if (!flag) v.push_back("DA");
        else continue;
    }
    for (auto e : v) cout << e << '\n';
    return 0;
}
