#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[6][6];
    int x, y;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if (a[i][j]) x = i, y = j;
        }
    }
    cout << abs(3 - x) + abs(3 - y) << '\n';
    return 0;
}




