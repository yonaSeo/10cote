#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string s[] = {"Yohan", "Yona", "Yuna"};

int main(void) {
    for (int i = 0; i < 3; i++) {
        mp.insert({s[i], i + 1});
        // mp[s[i]] = i + 1;
    }

    cout << mp["lingo"] << '\n'; // 없을 경우 0으로 초기화 되어서 할당
    mp["lingo"] = 999;
    cout << "size: " << mp.size() << '\n';

    mp.erase("lingo");
    auto it = mp.find("lingo");
    if (it == mp.end()) cout << "no lingo TT" << "\n";

    mp["aimer"] = 99999;
    it = mp.find("aimer");
    if (it != mp.end()) cout << (*it).first << ": " << (*it).second << "\n\n";

    // for (pair<string, int> it : mp) cout << it.first << ": " << it.second << '\n';
    for (auto it : mp) cout << it.first << ": " << it.second << '\n';
    // for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
    for (auto it = mp.begin(); it != mp.end(); it++)
        cout << (*it).first << ": " << (*it).second << '\n';
    mp.clear();

    return 0;
}
