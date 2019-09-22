#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
#define prec setprecision(n)

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

  ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
  map<string, int> studentID;
  
  int n, id;
  string name;
  cin>>n;
  /*
  copy this to input file
    3
	hassan 123
	ali 323
	med 987
	*/
  while(n--){
  	cin>>name >>id;
  	studentID[name] = id;
  }
  
  for(auto it = studentID.begin(); it != studentID.end() ; it++){
  	pair<string, int> stdnt = *it;
  	cout<< stdnt.F <<": ID"<<stdnt.S<<endl;
  }
  return 0;
}






