#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n % 7 == 0) {
           cout << n << '\n';
           continue;
        }
        string s1, s = to_string(n);
        if(n >= 100 && n <= 999) {
           int i, a = 0, b = 0, c = 0;
           for(i = 105; i <= 999; i += 7) {
            if(i <= 999)
                s1 = to_string(i);
            int cnt = 0;
            for(int j = 0; j < 3; j++) {
                if(s[j] != s1[j])
                    cnt++;
            }
            if(cnt == 1) {
               a = i;
            }
            else if(cnt == 2) {
               b = i;
            }
            else {
               c = i;
            }
          }
          if(a > 0)
            cout << a << '\n';
          else if(b > 0)
            cout << b << '\n';
          else
            cout << c << '\n';
        }
        else {
            int i, a = 0, b = 0;
            for(i = 14; i <= 99; i += 7) {
               if(i <= 99)
                 s1 = to_string(i);
            int cnt = 0;
            for(int j = 0; j < 2; j++) {
                if(s[j] != s1[j])
                    cnt++;
            }
            if(cnt == 1) {
               a = i;
            }
            else {
               b = i;
            }
          }
          if(a > 0)
            cout << a << '\n';
          else
            cout << b << '\n';
        }
    }
    return 0;
}

