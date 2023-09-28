#include <bits/stdc++.h>
using namespace std;

int main(void) {
  string a = "He is the king";
  a += " of peace!";
  a.pop_back();

  cout << a << " : " << a.size() << '\n';
  cout << char(*a.begin()) << '\n';
  cout << char(*(a.end() - 1)) << '\n';

  a.insert(0, "Oh Jesus, ");
  cout << a << " : " << a.size() << '\n';

  a.erase(0, 3);
  cout << a << " : " << a.size() << '\n';

  auto it = a.find("king");
  if (it != string::npos)
    cout << "word 'king' is included" << '\n';
  cout << it << '\n';
  cout << string::npos << '\n';

  cout << a.substr(17, 4) << '\n';

  return 0;
}
