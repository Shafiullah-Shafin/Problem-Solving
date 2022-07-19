#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        i64 d, k; cin >> d >> k;
        int cnt = 0;
        i64 x = 0, y = 0;
        while (x * x + y * y <= d * d) {
            if (cnt % 2 == 0) x += k;
            else y += k;
            cnt++;
        }
        cnt--;
        if (cnt & 1) cout << "Ashish" << '\n';
        else cout << "Utkarsh" << '\n';
    }
    return 0;
}
