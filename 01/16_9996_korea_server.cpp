#include <bits/stdc++.h>
using namespace std;
int n;
string pattern, prefix, suffix, word;
vector<string> v;

int main(void) {
    cin >> n;
    cin >> pattern;
    prefix = pattern.substr(0, pattern.find("*"));
    suffix = pattern.substr(pattern.find("*") + 1);
    for (int i = 0; i < n; i++) {
        cin >> word;
        if (prefix.size() + suffix.size() > word.size()) {
            v.push_back("NE");
        } else {
            if (prefix == word.substr(0, prefix.size())
            && suffix == word.substr(word.size() - suffix.size()))
                v.push_back("DA");
            else
                v.push_back("NE");
        }
    }
    for (string s : v) cout << s << '\n';
    return 0;
}
