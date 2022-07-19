#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int psum[n + 2];
        psum[0] = 0;
        for (int i = 1; i <= n; i++) {
            psum[i] = psum[i - 1] + v[i - 1];
        }
        while (q--) {
            int x; cin >> x;
            int l = 1, r = n, ans = -1;
            while ( l <= r) {
                int mid = (l + r) / 2;
                if (psum[mid] == x) {
                    ans = mid;
                    break;
                }
                else if (psum[mid] > x) {
                    ans = mid;
                    r = mid - 1;
                }
                else {
                    l = mid + 1;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
