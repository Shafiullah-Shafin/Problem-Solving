#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, l; cin >> n >> l;
    int lamp[1005];
    for (int i = 0; i < n; i++) {
        cin >> lamp[i];
    }
    sort (lamp, lamp + n);
    double mx = max (lamp[0] - 0, l - lamp[n - 1]) ;
    for (int i = 1 ; i < n; i++) {
        double d = (lamp[i] - lamp[i - 1]) / 2.00 ;
        if (mx < d)
            mx = d;
    }
    cout << fixed << setprecision(10) << mx << '\n';
    return 0;
}
