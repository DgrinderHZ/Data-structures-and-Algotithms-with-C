#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfstr(v) scanf("%s", v);
#define sz(v) (int)v.size()
#define ndl puts("")
#define SS stringstream
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < (b); i++)
#define prec setprecision(n)
#define endl '\n'

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;

int INF = numeric_limits<int>::max() - 9;

vi coins;
vi ready(10000), value(10000);


int solve(int x){
	
  if(x < 0) return INF;
  if(x == 0) return 0;
  if(ready[x]) return value[x];
  
  int best = INF;
  for(int c: coins){
    best = min(best, solve(x-c)+1);
  }
  ready[x] = 1;
  value[x] = best;
  
  return best;
}


int main ()
{
  #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  /*
  input 
    3
	1 3 4
	10
	1 2 3 4 5 6 7 8 9 100

  */
  int n, c, x;
  cin >> n;
  while(n--){
    cin >> c; 
    coins.pb(c);
  }
   cin >> n;
   while(n--){
   	cin >> x;
   	
    cout << solve(x) <<endl;
   }
  return 0;
}
