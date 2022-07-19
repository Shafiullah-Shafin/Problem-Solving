#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
        int n; cin >> n;
	    vector<pair<int, int>> v;
	    for (int i = 1; i <= n; i++) {
		    int x; cin >> x;
		    v.push_back({x, i});
	    }
	    sort(v.begin(), v.end());
	    cout << v[0].second << ' ' << v[n - 1].second << '\n';
	}
	return 0;
}
