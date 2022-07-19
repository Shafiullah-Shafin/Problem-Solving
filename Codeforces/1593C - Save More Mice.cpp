#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k, cnt = 0; cin >> n >> k;
        int a[k + 2];
        for(int i = 0; i < k; i++) {
            cin >> a[i];
        }
        sort(a, a + k);
        for (int i = k - 1, now = 0; i >= 0; i--) {
            if (now < a[i])
            {
                cnt++;
                now += n - a[i];
            }
            if (now >= n)
                break;
        }
        cout << cnt << '\n';
    }
    return 0;
}

