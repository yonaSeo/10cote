#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v1; // 초기화 no
vector<vector<int>> v2(10, vector<int>(10, 0)); // 초기화 yes
vector<int> v3[10]; // 얘는 배열이다

void go1(vector<vector<int>> &v) {
    v[0][0] = 999;
}

void go2(vector<vector<int>> &v) {
    v[0][0] = 999;
}

void go3(vector<int> *v) {
    v[0][0] = 999;
}

int main(void) {
    vector<int> temp;
    temp.push_back(0);
    v1.push_back(temp);

    v3[0].push_back(0);

    go1(v1); go2(v2); go3(v3);
    cout << v1[0][0] << " | " << v2[0][0] << " | " << v3[0][0] << "\n";
    return 0;
}
