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
  
	set<int> s;
	int t,n;
	cin>>t;
	// fill the text file with: 2 3 4 5 6 7
	while(t--){
		cin>>n;
		s.insert(n);
	}
	
	// ascending
	for(set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout<< *it <<" ";
	cout<<endl;
	// descending
	for(set<int>::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
		cout<< *it <<" ";
	cout<<endl;
	
	// find
	if(s.find(3) != s.end()) cout<<true<<endl;
	
	// sorting: overload < or
	// set<int, bool(*)(int,int)> s(great);
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}






