#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n + 2], b[n + 2];
		set<int> se;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			b[a[i]] = i;
			se.insert(i);
		}
		for (int i = n; i > 0; i--) {
			if (se.find(i) == se.end())continue;
			for (int j = b[i]; j <= n; j++) {
				if (se.find(a[j]) == se.end())break;
				se.erase(a[j]);
				cout << a[j] << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
