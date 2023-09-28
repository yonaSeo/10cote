#include <bits/stdc++.h>
using namespace std;
int arr[26];
string input = "";

int main(void) {
    cin >> input;
    for (char e : input) arr[(int)(e - 'a')]++;
    for (int e : arr) cout << e << ' ';
    cout << '\n';
    return 0;
}

