#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int first = 2 * 3;
        int second = 2 * 5;
        int third = 2 * 7;
        int tot = first + second + third;
        int fourth = n - tot;
        if (n <= tot) cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
            if (fourth == first || fourth == second || fourth == third) fourth--, third++;
            cout << first << ' ' << second << ' ' << third << ' ' << fourth << '\n';
        }
    }
    return 0;
}
