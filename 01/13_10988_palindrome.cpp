#include <bits/stdc++.h>
using namespace std;
string word, rev;

int main(void) {
    cin >> word;
    rev = word;
    reverse(rev.begin(), rev.end());
    if (rev == word) cout << "1\n";
    else cout << "0\n";
    return 0;
}
