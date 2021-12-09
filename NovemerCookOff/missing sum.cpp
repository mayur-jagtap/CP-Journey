#include<bits/stdc++.h>
#define ll long long int
#define printn(x) cout<<x<<"\n"
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void testCase();

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
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	ll n;
	cin>>n;
	ll a[n];
	a[0] = 1;
	int k = 3;
	for(int i=1;i<n;i++){
		a[i] = k;
		k += 2; 
	}
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";	
	}
	cout<<endl;
}