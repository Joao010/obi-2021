#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

#define vt vector
#define eb emplace_back
#define pb push_back
#define f(i, s, f) for(int i = s; i < f; ++i)
#define fd(i, s, f) for(int i = s; i >= f; --i)
#define r(x, ns) for(auto& x : ns)
#define s(x) int(x.size())
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define gr(type) vt<type>, greater<type>
#define F first
#define S second

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int MAX = 102;

int n, m, p, a, b, ans = 0;
ii s, t;
vt<vt<int>> adj, vis;

void dfs(int i, int j, int pi, int pj, int di, int dj) {
  if(i<0||i==n||j<0||j==m||vis[i][j]) return;
  if(max(abs(i - pi), abs(j - pj)) > 3) return;
  if(i == t.F && j == t.S) ans = 1;
  vis[i][j] = 1;
  if(adj[i][j]) {
    dfs(i + 1, j, i, j, 1, 0), dfs(i - 1, j, i, j, -1, 0), dfs(i, j + 1, i, j, 0, 1), dfs(i, j - 1, i, j, 0, -1);
  } else {
    dfs(i + di, j + dj, pi, pj, di, dj);
  }
}

int main() {
  cin>>n>>m>>p;
  adj = vis = vt<vt<int>>(n+1, vt<int>(m+1, 0));
  f(i,0,p) {
    cin>>a>>b;
    --a, --b;
    adj[a][b] = 1;
  }
  cin>>s.F>>s.S>>t.F>>t.S;
  --s.F, --s.S, --t.F, --t.S;
  dfs(s.F, s.S, s.F, s.S, 0, 0);
  cout<<(ans ? "S\n" : "N\n");
}
