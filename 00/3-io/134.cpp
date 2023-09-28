#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string s;
  string bufferflush;
  int T;

  cin >> T;
  getline(cin, bufferflush);
  for (int i = 0; i < T; i++) {
    getline(cin, s);
    cout << s << '\n';
  }

  return 0;
}
