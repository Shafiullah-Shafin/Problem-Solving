#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        long long n, k, res;
        cin >> n >> k;
        long long  l = 1, r = 1e12;
        while(l <= r) {
            long long mid = (l + r) / 2;
            if(mid - (mid / n) < k)
               l = mid + 1;
            else {
                res = mid;
                r = mid - 1;
            }
        }
        cout << res << '\n';
    }
    return 0;
}
