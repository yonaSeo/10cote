#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string a = "This is a string.";
    string *b = &a;
    cout << b << '\n';
    cout << *b << '\n';
    return 0;
}
