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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int count=0,res=0;
	int i = 0;
	while(i<n){
		if(s[i] == '0'){
			count++;
			if(count==k){
				res++;
				count = 0;
			}
		}else{
			count = 0;
		}
		i++;
	}
	cout<<res<<endl;
}