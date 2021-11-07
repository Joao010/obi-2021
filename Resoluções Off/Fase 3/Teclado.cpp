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
  int ans = 0;
  string p, pp; cin>>p;
  map<char, char> ns;
  ns['a'] = '2';
  ns['b'] = '2';
  ns['c'] = '2';
  ns['d'] = '3';
  ns['e'] = '3';
  ns['f'] = '3';
  ns['g'] = '4';
  ns['h'] = '4';
  ns['i'] = '4';
  ns['j'] = '5';
  ns['k'] = '5';
  ns['l'] = '5';
  ns['m'] = '6';
  ns['n'] = '6';
  ns['o'] = '6';
  ns['p'] = '7';
  ns['q'] = '7';
  ns['r'] = '7';
  ns['s'] = '7';
  ns['t'] = '8';
  ns['u'] = '8';
  ns['v'] = '8';
  ns['w'] = '9';
  ns['x'] = '9';
  ns['y'] = '9';
  ns['z'] = '9';
  ns['+'] = '0';
  int n; cin>>n;

  f(i,0,n) {
    cin>>pp;
    string soma = "";
    r(l, pp) {
      soma += ns[l];
    }
    if(soma == p) ++ans;
  }
  cout<<ans<<'\n';
}
