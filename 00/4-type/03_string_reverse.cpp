#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string a = "My name is Yohan Seo.";
  reverse(a.begin(), a.end());
  cout << a << '\n';
  reverse(a.begin(), a.end());
  cout << a << '\n';
  reverse(a.begin() + 11, a.end() - 1);
  cout << a << '\n';
}
