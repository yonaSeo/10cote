#include <bits/stdc++.h>
using namespace std;


int main(void) {
    int n, m;
    // int a[10][10];
    char c[10][10];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // scanf("%1d", &a[i][j]);
            // scanf("%c", &c[i][j]); // 개행도 문자로 인식
            scanf(" %c", &c[i][j]);
            // cin >> c[i][j];
        }
    }
    cout << "=========\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // printf("%d", a[i][j]);
            printf("%c", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 4 4
// 1000
// 0000
// 0111
// 0000
// 2 4
// LLMM
// MMLL
