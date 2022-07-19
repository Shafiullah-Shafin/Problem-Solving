#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
       int a, b; cin >> a >> b;
       long long ans;
       if (!a) ans = 1;
       else ans = a + b * 2 + 1;
       cout << ans << '\n';
    }
    return 0;
}



