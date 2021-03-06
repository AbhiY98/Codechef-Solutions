/****************************************************
*****************************************************
**               Abhishek(abhiy13)                 **          
**             Chandigarh University               **
**   https://www.youtube.com/watch?v=r6zIGXun57U   **
*****************************************************
****************************************************/ 
 
 
#include "bits/stdc++.h"
	using namespace std;
 
 
//`````````````````````````````````````````````````````Random Stuff Here```````````````````````````````````````````````````````//
	
#define io std::ios::sync_with_stdio(false);
#define FOR(i,n) for(ll i = 0 ; i < n ; i++)
#define FORR(i,a,b) for(ll i = a ; i < b ; i++)
#define RFOR(i,a,b) for(ll i = a ; i > b ; i--)	
#define ll long long
#define llu unsigned long long
#define pb(x) push_back(x)
#define eb(x) emplace_back(x)
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
 
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
 
 
//``````````````````````````````````````````````````````Start of Program`````````````````````````````````````````````````//
 
 
int main(){
	#ifdef ABHI
		freopen("input.txt" , "r" , stdin);
	#endif
	int t,i;
 
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long long int n,m,j;
        scanf("%lld",&n);
        m=sqrt(n);
        long long int rest=n-m*m;
        long long int quo,rem;
        quo=rest/m;
        rem=rest%m;
        for(j=0;j<m+quo;j++)
        {
            printf("X");
        }
        for(j=0;j<m-rem;j++)
        {
            printf("D");
        }
        if(rem>0)
        {
            printf("X");
            for(j=0;j<rem;j++)
            {
                printf("D");
            }
        }
        printf("\n");
    }
	#ifdef ABHI
		cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s\n";
	#endif
	return 0;
} 
