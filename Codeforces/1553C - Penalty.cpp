#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
       char s[12];
       for (int i = 1; i <= 10; i++) {
            cin >> s[i];
       }
       int cnt1 = 0, cnt2 = 0, cnt1_ = 0, cnt2_ = 0;
       int ans = 0, remain1 = 0, remain2 = 0;
       for (int i = 1; i <= 10; i++) {
           if (i % 2 == 1) {  // 1st team
              if (s[i] == '1')
                 cnt1++;
              else if (s[i] == '?')
                 cnt1_++;
           }
           else {            // 2nd team
              if (s[i] == '1')
                 cnt2++;
              else if (s[i] == '?')
                 cnt2_++;
           }
           if (i % 2 == 0) {
              remain1 = (10 - i) / 2;
              remain2 = (10 - i) / 2;
              if (cnt1 + cnt1_ > remain2 + cnt2 || cnt2 + cnt2_ > remain1 + cnt1) {
                  ans = i;
                  break;
              }
           }
           else {
               remain1 = (10 - i) / 2;
               remain2 = (10 - i) / 2 + 1;
               if (cnt2 + cnt2_ > remain1 + cnt1 || cnt1 + cnt1_ > remain2 + cnt2) {
                  ans = i;
                  break;
               }
           }
       }
       if (!ans) {
          cout << 10 << '\n';
       }
       else {
          cout << ans << '\n';
       }
    }
    return 0;
}
