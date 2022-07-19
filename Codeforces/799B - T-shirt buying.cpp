#include<bits/stdc++.h>
using namespace std;
#define i64 long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    i64 n; cin >> n;
    vector<i64> vr;
    for (i64 i = 0; i < n; i++) {
        int x; cin >> x;
        vr.push_back(x);
    }
    set<pair<i64, int>> se1, se2, se3;
    for (i64 i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1) se1.insert({vr[i], i + 1});
        else if (x == 2) se2.insert({vr[i], i + 1});
        else se3.insert({vr[i], i + 1});
    }
    for (i64 i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == 1) se1.insert({vr[i], i + 1});
        else if (x == 2) se2.insert({vr[i], i + 1});
        else se3.insert({vr[i], i + 1});
    }
    int m; cin >> m;
    vector<i64> ans;
    while (m--) {
        int x; cin >> x;
        pair<i64, int> p;
		if (x == 1) {
			if (se1.size() == 0) {
				ans.push_back(-1);
				continue;
			}
			p = *se1.begin();
			ans.push_back( p.first);
			se1.erase(p);
		}
        else if (x == 2) {
			if (se2.size() == 0) {
				ans.push_back(-1);
				continue;
			}
			p = *se2.begin();
			ans.push_back( p.first);
			se2.erase(p);
		}
		else {
			if (se3.size() == 0) {
				ans.push_back(-1);
				continue;
			}
			p = *se3.begin();
			ans.push_back( p.first);
			se3.erase(p);
		}
		auto it = se1.find(p);
		if (it != se1.end()) {
			se1.erase(it);
			continue;
		}
		it = se2.find(p);
		if (it != se2.end()) {
			se2.erase(it);
			continue;
		}
		it = se3.find(p);
		if (it != se3.end()) {
			se3.erase(it);
			continue;
		}
    }
    for (i64 x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
    return 0;
}

