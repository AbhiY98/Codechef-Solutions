#include "bits/stdc++.h"
	using namespace std;
 
#define PB(x) push_back(x)
#define EB(x) emplace_back(x)
#define F first
#define S second
 
#define TRACE
 
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
	cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif
 
typedef long long ll;
typedef pair <int,int> pii;
typedef vector <int> vi;
 
int main(){
	ios::sync_with_stdio(false);
	#ifdef ABHI
		freopen("input.txt" , "r" , stdin);
	#endif
	int T;
	cin>>T;
	while(T--){
		ll n , x , res = 0;
		cin>>n;
		vi ar(n,0);
		for(int i = 0 ; i <  n ; i++) {cin>>ar[i];}
		ll i = 0;
		while(i<n){
			x = ar[i];
			ll o = 0;
			while(ar[i] == x and i < n){
				i++,o++;
			}
			res += (o*(o+1))/2;
		}
		cout<<res<<endl;
	}
	#ifdef ABHI
		cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s\n";
	#endif
	return 0;
} 
