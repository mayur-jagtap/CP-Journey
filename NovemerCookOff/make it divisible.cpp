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
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	int sum=0,count=0;
	for(int i = 0; i < n; i++){
		sum += a[i];
		if(a[i] % 3 != 0){
			count++;
		}
	}
	int ans = -1;
	if(sum%3 == 0){
		ans = count/2;
	}
	cout<<ans<<endl;
}