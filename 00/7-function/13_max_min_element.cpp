#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int a = *max_element(v.begin(), v.end());
    int val = *min_element(v.begin(), v.end());
    // auto b = max_element(v.begin(), v.end());
    auto it = min_element(v.begin(), v.end());
    cout << val << '\n'; // 값
    cout << (int)(it - v.begin()) << '\n'; // 인덱스
    return 0;
}
