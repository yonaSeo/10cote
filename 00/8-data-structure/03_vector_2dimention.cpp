#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<vector<int>> v1; // 빈 배열로 초기화
    for (int i = 0; i < 10; i++) {
        vector<int> temp;
        v1.push_back(temp);
    }

    vector<vector<int>> v2(10, vector<int>(10, 0)); // 0으로 초기화

    vector<int> v3[10]; // v1과 같다

    return 0;
}
