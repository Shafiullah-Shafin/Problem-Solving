#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k; cin >> n >> m >> k;
    int a[m + 2];
    for (int i = 0; i < m + 1; i++) {
        cin >> a[i];
    }
    int yo = 0;
    for (int i = 0; i < m; i++) {
        int ctr = 0;
        for (int k = 0; k <= 30; k++) {
            if (((a[i] >> k) & 1) != ((a[m] >> k) & 1))
                ctr++;
        }
        if (ctr <= k)
           yo++;
    }
    cout << yo << '\n';
    return 0;
}

