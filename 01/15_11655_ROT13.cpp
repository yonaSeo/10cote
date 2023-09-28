#include <bits/stdc++.h>
using namespace std;
string str;

int main(void) {
    getline(cin, str);
    for (char s : str) {
        if ((s >= 'a' && s <= 'z'))
            if (s + 13 > 'z') cout << (char)(s - 13);
            else cout << (char)(s + 13);
        else if ((s >= 'A' && s <= 'Z'))
            if (s + 13 > 'Z') cout << (char)(s - 13);
            else cout << (char)(s + 13);
        else cout << s;
    }
    cout << '\n';
    return 0;
}
