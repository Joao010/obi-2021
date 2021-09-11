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

vt<string> ops;
int equals() {
  if(!s(ops)) return 0;

  string ant = "";
  r(v, ops) {
    if(ant != "") {
      r(l, ant) {
        if(count(be(v), l) != count(be(ant), l)) {
          return 0;
        }
      }
      r(l, v) {
        if(count(be(v), l) != count(be(ant), l)) {
          return 0;
        }
      }
    }
    ant = v;
  }

  return 1;
}

int main() {
  int n; cin>>n;
  string p;cin>>p;

  string sum = "";
  vt<string> ans;

  f(i,1,n/2+1) {
    if(n%i == 0) {
      sum = "";
      f(j,0,s(p)) {
        sum += p[j];
        if((j+1)%i == 0) {
          ops.eb(sum), sum = "";
        }
      }
    }

    if(equals()) {
      cout<<ops[0]<<'\n';
      return 0;
    }
    ops.clear();
  }
  if(!s(ans)) {
    cout<<"*\n";
  } else {
    cout<<ans[0]<<'\n';
  }
}
