#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;

#define f first
#define s second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsz resize
#define bk back()
#define pb push_back
#define endl "\n"
#define dotl " "

#define fr1(i,a,b) for(int i = (a); i <= (b); ++i)
#define fr(i,a) fr1(i,0,a)
#define rf1(i,a,b) for(int i = (b)-1; i >= (a); --i)
#define rf(i,a) rf1(i,0,a)
#define trav(x,a) for (auto& x: a)

#define deb(x) cout << #x << "=" << x << endl
#define showRunTime cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
#define ONLINE_JUDGE freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);

const int MX  = 2e5+5;
const int N   = 1e5+5;
const int MOD = 1e9+7;      // used in most problems
const ld  PI  = acos(-1);   // inverse cos of -1

void solution(){
  int n;
  cin >> n;
  int temp;
  vi a(3);
  for (int i = 0; i < n; i++){
    cin >> temp;
    a[temp % 3]++;
  }

  int res = 0;
  while(*min_element(all(a)) != n/3){
    for (int i = 0; i < 3; i++){
      if(a[i]> n/3){
        res++;
        a[i]--;
        a[(i + 1) % 3]++;
      }
    }
  }

  cout << res << endl;
}

int main(){
  std::ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // ONLINE_JUDGE;
  cin >> t;

  while (t--)
  {
    solution();
  }

  showRunTime;
  return 0;
}

/*

inputCopy
4
6
0 2 5 5 4 8
6
2 0 2 1 0 0
9
7 1 3 4 2 10 3 9 6
6
0 1 2 3 4 5
outputCopy
3
1
3
0

*/