#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int zero = 0, sz = s.size();
		for (auto x : s) {
            if (x == '0')
               zero++;
		}
		int one = sz - zero;
		if (min(zero, one) & 1) cout << "DA" << '\n';
		else cout << "NET" << '\n';
	}
    return 0;
}

