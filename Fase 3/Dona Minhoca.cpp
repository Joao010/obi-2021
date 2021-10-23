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

int n, soma = 0, ans = 0, ok, au;
vt<vt<int>> adj, sums, viss;
vt<int> vis;
set<ii> ns;

int dfs(int u, int p) {
  if(vis[u] == 2) {
    ok = 1;
    return 0;
  }
  vis[u] = 1;
  int sum = 0;
  r(v, adj[u]) {
    if(vis[v] != 1)
      sum = max(sum, dfs(v, u) + 1);
  }
  vis[u] = 2;
  if(ok == 1) au = max(au, sum);
  return sum;
}

int productLength(int cyclenumber) {
  unordered_map<int, int> mp;
 
  for (int i = 1; i <= n; i++) {
    if (vis[i] != 0)
      mp[vis[i]]++;
  }
  
  int cnt = 1;
 
  for (int i = 1; i <= cyclenumber; i++) {
    cnt = cnt * mp[i];
  }

  if (cyclenumber == 0)
    cnt = 0;
 
  return cnt;
}

int u, v;
int main() {
  cin>>n;
  adj = vt<vt<int>>(n+2);
  sums = viss = vt<vt<int>>(n+2, vt<int>(n+2));
  f(i,0,n-1) {
    cin>>u>>v;
    adj[u].eb(v), adj[v].eb(u);
  }
  f(i,1,n+1) {
    f(j,1,n+1) {
      if(i != j && !count(be(adj[i]), j)) {
        vis = vt<int>(n+2, 0);
        adj[i].eb(j), adj[j].eb(i);
        ok = au = 0;
        dfs(u, -1);
        cout<<'\n';
        if(ok) {
          ns.insert({ i, j });
          cout<<productLength(au)<<'\n';
          ++au;
          sums[i][j] = au, sums[j][i] = au;
          soma = max(soma, au);
        }
        adj[i].pop_back(), adj[j].pop_back();
      }
    }
  }
  r(v, ns) {
    if(!viss[v.F][v.S] && sums[v.F][v.S] == soma) {
      viss[v.F][v.S] = 1, viss[v.S][v.F] = 1;
      cout<<v.F<<' '<<v.S<<'\n';
      ++ans;
    }
  }
  cout<<soma<<'\n'<<ans<<'\n';
}
