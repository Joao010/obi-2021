#include <bits/stdc++.h>
using namespace std;

#define vt vector
typedef vt<int> vi;
typedef vt<vt<int>> vvi;
typedef vt<string> vs;
typedef pair<int, int> ii;

#define _outputConfig(a) if(a) ios::sync_with_stdio(0);cin.tie(0)
#define _fixAll(x) if(x >= 0) cout.precision(x);cout.setf(ios::fixed)
#define eb emplace_back
#define pb push_back
#define f(a, b, c) for(int  a = b; a < c; ++a)
#define w(a) while(a--)
#define s(a) int(a.size())
#define l(a) a.length()
#define be(ns) ns.begin(), ns.end()
#define rbe(ns) ns.rbegin(), ns.rend()
#define fi first
#define se second
#define mdc(a, b) __gcd(a, b)

const int mVI = 1<<20, mVJ = 1<<10, mVZ = 105;
const int INF = 0x3f3f3f3f, OUT = -INF, OUT2 = -1, MOD = 1e9 + 7;

void log(int a) { cout<<a<<'\n'; }
void log(string a) { cout<<a<<'\n'; }
void log(vi a, int s = 0) {
  f(i, s, s(a)) {
    if(i > s) cout<<' ';
    cout<<a[i];
  }
  cout<<'\n';
}
void log(vvi a, int s1 = 0, int s2 = 0) {
  f(i, s1, s(a)) {
    f(j, s2, s(a[i])) {
      if(j > s2) cout<<' ';
      cout<<a[i][j];
    }
    cout<<'\n';
  }
}

void CIN(int &a) { cin>>a; }
void CIN(int &a, int &b) { cin>>a>>b; }
void CIN(int &a, int &b, int &c) { cin>>a>>b>>c; }
void CIN(vi &ns, int I, int s = 0) {
  ns = vi(I);
  f(i, s, I) {
    cin>>ns[i];
  }
}
void CIN(vvi &ns, int I, int J, int s1 = 0, int s2 = 0) {
  ns = vvi(I, vi(J));
  f(i, s1, I) {
    f(j, s2, J) {
      cin>>ns[i][j];
    }
  }
}

#define isConsonant(a) a!='a'&&a!='e'&&a!='i'&&a!='o'&&a!='u'

string p, r = "";
int p_int;
char p_char1, p_char2;

int main() {_outputConfig(1);_fixAll(2);

  cin>>p;
  f(i,0,l(p)) {
    r += p[i];

    if(isConsonant(p[i])) {
      p_int = int(p[i]);
      if(p_int >= 97 && p_int <= 101) {
        r += (p_int - 97 <= 101 - p_int ? 'a' : 'e'); 
      } else if(p_int >= 101 && p_int <= 105) {
        r += (p_int - 101 <= 105 - p_int ? 'e' : 'i');
      } else if(p_int >= 105 && p_int <= 111) {
        r += (p_int - 105 <= 111 - p_int ? 'i' : 'o');
      } else if(p_int >= 111 && p_int <= 117) {
        r += (p_int - 111 <= 117 - p_int ? 'o' : 'u');
      } else r += 'u';

      p_char1 = p_int + 1, p_char2 = p_int + 2;
      if(p_int + 2 > 122) r += 'z';
      else if(isConsonant(p_char1)) r += p_char1;
      else {
        r += p_char2;
      }
    }
  }
  log(r);

return 0;}

/* ALERTAS:

  conflitos: [[
    f(i,0,n) {
      f(i,0,m) {
      }
    }

    ns[i] > ns[i] /// ns1[i] > ns2[i]
    ns[i] > ns[i] /// ns[i] > ns[j] 
  ]]

  começos e limites de iterações: [[
    f(i,a,b) /// f(i,a,b+1)
    f(i,a,b) /// f(i,a-1,b)
  ]]

*/
