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
  int a, b, c, x, cur = 1, ans = 0;
  cin>>a>>b>>c;
  if(cur == c) ++ans;
  f(i,0,b) {
    cin>>x;
    cur += x;
    if(!cur) cur = a;
    else if(cur > a) cur = 1;
    if(cur == c) ++ans;
  }
  cout<<ans<<'\n';
}
