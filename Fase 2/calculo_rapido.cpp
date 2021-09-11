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
const int MAX = 102;

int main() {
  int a, b, c, sum, ans = 0;
  string num;
  cin>>a>>b>>c;
  f(i,b,c+1) {
    sum = 0;
    num = to_string(i);
    r(l, num) {
      sum += int(l) - 48;
    }
    if(sum == a) ++ans;
  }
  cout<<ans<<'\n';
}
