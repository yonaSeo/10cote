#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v, int r) {
  for (int i = 0; i < r; i++)
    cout << v[i] << ' ';
  cout << '\n';
}

void permutation(vector<int> v, int n, int r, int depth)
{
  if (depth == r) {
    print(v, r);
    return;
  }
  for (int i = depth; i < n; i++)
  {
    swap(v[i], v[depth]);
    permutation(v, n , r, depth + 1);
    swap(v[i], v[depth]);
  }
}

int main(void)
{
  vector<int> v = {1, 2, 3};
  permutation(v, 3, 3, 0);
  return 0;
}
