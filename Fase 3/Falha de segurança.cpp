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

int main() {
  int n, ans = 0; cin>>n;
  string ns[n];
  f(i,0,n) {
    cin>>ns[i];
    fd(j,i-1,0) {
      if(s(ns[i]) < s(ns[j])) continue;
      if (ns[i].find(ns[j]) != string::npos) {
        ++ans;
      }
    }
  }
  f(i,0,n) {
    f(j,i+1,n) {
      if(s(ns[i]) < s(ns[j])) continue;
      if (ns[i].find(ns[j]) != string::npos) {
        ++ans;
      }
    }
  }
  cout<<ans<<'\n';
}
