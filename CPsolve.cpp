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


int main() {
 #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
  int t, n;
  string s;
  cin>>t; cin.ignore();
  deque<int> q;
  int head = 0;
  
  while(t--){
  	
  	getline(cin, s); // we still can avoid using substr: cin only
  	
  	if(s[0] == 't'){
  		
  		 if(head==0) q.push_front(stoi(s.substr(8).c_str()));
  		 else q.push_back(stoi(s.substr(8).c_str()));
  		 
	  }else if(s[0]=='p'){
	  	
  		 if(head == 0) q.push_back(stoi(s.substr(10).c_str()));
  		 else q.push_front(stoi(s.substr(10).c_str()));
  		 
	  }else{
	  	
	  	if(s =="back"){
	  		
	  		if(head == 0){
	  			
	  			if(!q.empty()) {
		  			cout<<q.back()<<endl;
		  			q.pop_back();
				  }else{
				  	cout<<"No job for Ada?"<<endl;
				  }
				  
			  }else{
			  	
			  	if(!q.empty()) {
		  			cout<<q.front()<<endl;
		  			q.pop_front();
				  }else{
				  	cout<<"No job for Ada?"<<endl;
				  }
				  
			  }
			  
		  }else if(s =="front"){
		  	
		  	if(head == 0){
		  		
	  			if(!q.empty()) {
		  			cout<<q.front()<<endl;
	  				q.pop_front();
				  }else{
				  	cout<<"No job for Ada?"<<endl;
				  }
				  
			  }else{
			  	
			  	if(!q.empty()) {
		  			cout<<q.back()<<endl;
		  			q.pop_back();
				  }else{
				  	cout<<"No job for Ada?"<<endl;
				  }
				  
			  }
		  	
		  }else if(s == "reverse"){
		  	
		  	head ^= 1;
			  
		  }
	  }
  }
	  

  
   return 0;
}

