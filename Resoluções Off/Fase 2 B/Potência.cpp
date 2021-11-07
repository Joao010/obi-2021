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
  int n;
  string p;
  ll ans = 0, calc, po, num;
  cin>>n;
  vt<ii> ns(n+2);
  f(i,0,n) {
    cin>>p;
    calc = 1, po = int(p[s(p)-1])-48, num = stoi(p.substr(0,s(p)-1));
    f(i,0,po) {
      calc *= num;
      calc %= MOD;
    }
    ans += calc;
    ans %= MOD;
  }
  cout<<ans<<'\n';
}
