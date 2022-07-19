#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while (t--) {
       int n, w; cin >> n >> w;
       multiset<int> se;
       for (int i = 0; i < n; i++) {
			int x; cin >> x;
			se.insert(x);
       }
       int h = 1, cur = w;
       while (!se.empty()) {
          auto it = se.upper_bound(cur);
          if (it == se.begin()) {
             cur = w;
             h++;
          }
          else {
             it--;
             cur -= *it;
             se.erase(it);
          }
       }
       cout << h << '\n';
	}
	return 0;
}
