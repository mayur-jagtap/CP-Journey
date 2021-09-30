#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

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
	ll D,d,p,q;
	cin>>D>>d>>p>>q;
	ll s=0;
	ll n = D/d;
	s = (n*(2*p + (n-1)*q))/2 ;
	s =s*d;
	ll remain = D%d;
	s = s + ((p + (n*q))*remain);
 	cout<<s<<endl;
}


