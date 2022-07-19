#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  map<int, int> mp;
  while (n--) {
     int h, m; cin >> h >> m;
     int x = (h * 60) + m;
     mp[x]++;
  }
  int mx = 0;
  for (auto x : mp) {
      mx = max(mx, x.second);
  }
  cout << mx << '\n';
  return 0;
}

