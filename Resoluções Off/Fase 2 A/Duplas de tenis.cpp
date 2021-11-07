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
  vt<int> ns(4);
  f(i,0,4) cin>>ns[i];
  int me = INF;
  f(i,0,4) {
    f(j,0,4) {
      if(i == j) continue;
      f(z,0,4) {
        if(z == i || z == j) continue;
        f(k,0,4) {
          if(k == i || k == j || k == z) continue;
          me = min(me, abs((ns[i] + ns[j]) - (ns[z] + ns[k])));
        }
      }
    }
  }
  cout<<me<<'\n';
}
