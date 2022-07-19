#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int l = s.size();
        if(l == 1 || l == 2) {
            cout << 0 << '\n';
            continue;
        }
        int one = 0, zero = 0;
        for(int i = 0; i < l; i++) {
            if(s[i] == '1')
                one++;
            else
                zero++;
        }
        if(one == zero) {
            cout << zero - 1 << '\n';
        }
        else {
            cout << min(one, zero) << '\n';
        }
    }
    return 0;
}


