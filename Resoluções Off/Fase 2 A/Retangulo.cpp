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
  int n, x; cin>>n;
  ll sum = 0;
  unordered_map<ll, int> exist;
  vt<ll> ns;
  f(i,0,n) {
    cin>>x;
    sum += x;
    exist[sum] = 1;
    ns.eb(sum);
  }
  if(!(sum&1))
    f(i,0,n) {
      const ll p1 = (ns[i] + (sum/2)) % sum;
      if(exist[p1]) {
        f(j,i+1,n) {
          if(ns[j] == p1) continue;
          const ll p2 = (ns[j] + (sum/2)) % sum;
          if(exist[p2]) {
            cout<<"S\n";
            return 0;
          }
        }
      }
    }
  cout<<"N\n";
}
