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

int t=1;


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
	string s[n];
	for(int i = 0; i < n; i++){
		cin>>s[i];	
	}

	for(int i = 0; i < n; i++){
		if(s[i].size() <= 10){
			cout<<s[i]<<endl;
		}else{
			int len = s[i].size();
			cout<<s[i][0]<<len-2<<s[i][len-1]<<endl;
		}

	}
}