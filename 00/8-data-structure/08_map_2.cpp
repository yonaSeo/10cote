#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main()
{
    mp[1] = 0;
    if (mp.find(1) == mp.end())
    // if (mp[1] == 0)
        mp[1] = 999;
    for (auto i : mp) cout << i.first << " " << i.second;
    cout << '\n';
    return 0;
}
