#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base :: sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    long long hc, dc, hm, dm; cin >> hc >> dc >> hm >> dm;
    long long k, a, h; cin >> k >> a >> h;
    bool tt = false;
    for (int i = 0; i <= k; i++) {
      long long temp_dc = dc + i * a;
      long long temp_hc = hc + (k - i) * h;
      long long kill_monster = (hm + temp_dc - 1) / temp_dc;
      long long kill_char = (temp_hc + dm - 1) / dm;
      if (kill_monster <= kill_char) {
        tt = true;
        break;
      }
    }
    if(tt)
      cout << "YES" << '\n';
    else
      cout << "NO" << '\n';
  }
  return 0;
}
