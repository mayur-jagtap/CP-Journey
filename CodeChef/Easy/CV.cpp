#include<bits/stdc++.h>
#define ll long long int
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
	string s;
	ll n,count=0;;
	cin>>n;
	cin>>s;
	for(int i = 1; i < n; i++){
		if((s[i] =='a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] == 'u') && 
			(s[i-1] !='a' && s[i-1] !='e' && s[i-1] !='i' && s[i-1] !='o' && s[i-1] != 'u') ){
			count++;
		}	
	}
	cout<<count<<endl;
}