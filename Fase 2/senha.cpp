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

const int mVI = 1<<20, mVJ = 1<<10, INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int MAX = 501;

vt<string> ss;
int main() {
  int n, m, k, op; cin>>n>>m>>k;
  if(m == 1) {
    vt<string> ans;
    string p, x;cin>>p;
    f(i,0,m) {
      cin>>x;
    }
    f(i,0,s(p)) {
      if(p[i] == '#') {
        f(j, 0, s(x)) {
          string u = p;
          u[i] = x[j];
          ans.eb(u);
        }
      }
    }
    cin>>op;
    sort(be(ans));
    cout<<ans[op-1]<<'\n';
  } else cout<<"0\n";
}
