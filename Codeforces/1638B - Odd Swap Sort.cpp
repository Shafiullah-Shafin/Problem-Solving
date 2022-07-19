#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> odd, even;
    bool sort_od = true, sort_ev = true;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    int ev_sz = even.size();
    int od_sz = odd.size();
    for (int i = 1; i < ev_sz && sort_ev; i++) {
        if (even[i] < even[i - 1]) {
            sort_ev = false;
        }
    }
    for (int i = 1; i < od_sz && sort_od; i++) {
        if (odd[i] < odd[i - 1]) {
            sort_od = false;
        }
    }
    if (sort_od && sort_ev)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
  }
  return 0;
}

