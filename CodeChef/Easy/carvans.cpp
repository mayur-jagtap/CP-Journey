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
	int n;
	cin>>n;
	int car[n];
	for(int i = 0; i < n; i++){	
		cin>>car[i];
	}
	int max = INT_MAX;
	int count = 0;
	for(int i = 0; i < n; i++){
		if(max >= car[i]){
			max = car[i] ;
			count++;
		}
	}
	cout<<count<<endl;
}