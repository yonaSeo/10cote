#include <bits/stdc++.h>
using namespace std;
string str;

int main(void) {
    getline(cin, str);
    for (char s : str) {
        if ((s >= 'a' && s <= 'm') || (s >= 'A' && s <= 'M'))
            cout << (char)(s + 13);
        else if ((s >= 'n' && s <= 'z') || (s >= 'N' && s <= 'Z'))
            cout << (char)(s - 13);
        else cout << s;
    }
    cout << '\n';
    return 0;
}
