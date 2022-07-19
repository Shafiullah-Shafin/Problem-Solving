#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int res1 = (1 << 30), res2 = (1 << 30), sz = s.size();
        for(int i = sz - 1; i > 0; i--) {
            bool tt = true;
            if(s[i] == '5') {
                for (int j = i - 1; j >= 0; j--) {
                    if(s[j] == '2' || s[j] == '7') {
                      res1 = (sz - 1 - i) + (i - j - 1);
                      tt = false;
                      break;
                    }
                }
           if(tt == false)
            break;
         }
       }
       for(int i = sz - 1; i > 0; i--) {
            bool tt = true;
            if(s[i] == '0') {
                for (int j = i - 1; j >= 0; j--) {
                    if(s[j] == '0' || s[j] == '5') {
                      res2 = (sz - 1 - i) + (i - j - 1);
                      tt = false;
                      break;
                    }
                }
           if(tt == false)
            break;
         }
       }
       cout << min(res1, res2) << '\n';
    }
    return 0;
}

