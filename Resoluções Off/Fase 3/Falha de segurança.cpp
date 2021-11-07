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

int main() {
  int n, ans = 0; cin>>n;
  string p;
  vt<string> ps;
  map<string, int> cont;
  for(int i=n;i--;) {
    cin>>p;
    ps.eb(p);
    set<string> subs;
    f(i,0,s(p)) {
      string soma = "";
      f(j,i,s(p)) {
        soma += p[j];
        subs.insert(soma);
      }
    }
    r(v, subs) ++cont[v];
  }
  r(v, ps) ans += cont[v];
  cout<<ans - n<<'\n';
}
