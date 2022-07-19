#include<bits/stdc++.h>
using namespace std;

const int mxn = 3e5 + 7;
vector<int> g[mxn];
bool vis[mxn], col[mxn], yo;

void dfs(int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v]) {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else {
            if (col[u] == col[v]) yo = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int m = n; yo = true;
        vector<int> v1(n + 2, 0);
        while (m--) {
            int u, v; cin >> u >> v;
            v1[u]++, v1[v]++;
            if (v1[u] > 2 || v1[v] > 2) yo = false;
            if (u == v) yo = false;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                dfs(i);
                if (!yo) break;
            }
        }
        cout << (yo ? "YES" : "NO") << '\n';
        memset(vis, 0, n + 2);
        memset(col, 0, n + 2);
        for (int i = 1; i <= n; i++) {
            g[i].clear();
        }
    }
    return 0;
}
