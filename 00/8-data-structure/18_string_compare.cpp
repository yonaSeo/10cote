#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main(void) {
    string ss[3] = {"112", "111", "33"};
    sort(ss, ss + 3, compare);
    for(string s : ss) cout << s << ' ';
    cout << '\n';
    return 0;
}
