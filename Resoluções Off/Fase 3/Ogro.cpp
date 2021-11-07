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
  int n, res = 0;cin>>n;
  while(res < 5 && n) {
    ++res, --n;
  }
  f(i,0,res) cout<<'I';
  if(!res) cout<<'*';
  cout<<'\n';
  res = 0;
  while(res < 5 && n) {
    ++res, --n;
  }
  f(i,0,res) cout<<'I';
  if(!res) cout<<'*';
  cout<<'\n';
}
