#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> ump;

int main(void) {
    ump["bcd"] = 1;
    ump["aaa"] = 1;
    ump["aba"] = 1;
    ump["zzz"] = 1;

    for (auto e : ump) cout << e.first << ": " << e.second <<  '\n';

    return 0;
}
