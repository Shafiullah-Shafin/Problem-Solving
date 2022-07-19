#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, r, b; cin >> n >> r >> b;
        string s = "";
        int minimum_range = r / (b + 1);
        int extra = r % (b + 1);
        while(r > 0 || b > 0){
            for (int i = 1; i <= minimum_range; i++) {
                s += 'R';
                r--;
            }
            if (extra) {
                s += 'R';
                extra--;
                r--;
            }
            if (b) {
               s += 'B';
               b--;
            }
        }
        cout << s << '\n';
    }
    return 0;
}
