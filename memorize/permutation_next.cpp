#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  vector<int> a = {2, 1, 3};
  // int a[] = {1, 2, 3};
  sort(a.begin(), a.end()); // 정렬하고 순열 구해야 한다
  do
  {
    for (int i : a) cout << i << " ";
    cout << '\n';
  } while (next_permutation(a.begin(), a.end()));
  // } while (next_permutation(&a[0], &a[3]));
}
