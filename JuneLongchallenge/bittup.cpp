#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll powiterative(ll a , ll n){
	ll ans = 1;
	while(n > 0){
		if(n & 1){
			ans = ((ans % mod) * (a % mod)) % mod;
		}
		n /= 2;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return ans;
}

void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

void solve()
{
	ll n,m;
	cin>>n>>m;
	ll result =powiterative(2,n);
	result = result -1;
	cout<<powiterative(result,m)<<endl;
}