#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

#define vt vector
#define eb emplace_back
#define pb push_back
#define f(i, s, f) for(ll i = s; i < f; ++i)
#define fd(i, s, f) for(int i = s; i >= f; --i)
#define r(x, ns) for(auto& x : ns)
#define s(x) int(x.size())
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define gr(type) vt<type>, greater<type>
#define F first
#define S second

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int MAX = 1e5;

int main() {
  int a, b, ct = 0, ans = 0;
  vt<int> anss = {
    1,
    64,
    729,
    4096,
    15625,
    46656,
    117649,
    262144,
    531441,
    1000000,
    1771561,
    2985984,
    4826809,
    7529536,
    11390625,
    16777216,
    24137569,
    34012224,
    47045881,
    64000000,
    85766121,
  };
  cin>>a>>b;
  r(v, anss) if(v >= a && v <= b) ++ans;
  cout<<ans<<'\n';
}
