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
	int x,y,k,n;
	cin>>x>>y>>k>>n;
	int p[n],c[n];
	for(int i = 0; i < n; i++){
		cin>>p[i]>>c[i];
	}
	bool flag=false;
	for(int i = 0; i < n; i++){
		if(p[i]+y >= x && k>=c[i]){
			flag = true;
			break;
		}
	}
	if(flag){
		cout<<"LuckyChef"<<endl;
	}else{
		cout<<"UnluckyChef"<<endl;
	}
}