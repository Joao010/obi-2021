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
const int MAX = 1e6 + 7;

int main() {
  int n;cin>>n;
  int ns[n+1];
  f(i,1,n+1) cin>>ns[i];
  f(i,1,n/2+1) {
    if(ns[i] != ns[n-i+1]) {
      cout<<1<<'\n';
      return 0;
    }
  }
  cout<<0<<'\n';
}
