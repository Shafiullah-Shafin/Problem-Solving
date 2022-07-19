#include<bits/stdc++.h>
using namespace std ;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    char s[n + 2][10] ;
    for (int i = 1; i <= n ; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> s[i][j];
        }
    }
    int ans = 0;
    for (int j = 0 ; j < 7; j++) {
        int cnt = 0 ;
        for (int i = 1 ; i <= n; i++) {
            if (s[i][j] == '1' ) cnt++ ;
        }
        ans = max (ans, cnt);
    }
    cout << ans << '\n';
    return 0 ;
}
