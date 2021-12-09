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
	string s;
	cin>>s;
	string res;
	int n = s.length();
	int i=0;
	while(i<n){
		if(s[i] == '.'){
			res += '0';
			i++;
		}else if(s[i] == '-' && s[i+1] == '.'){
			res += '1';
			i += 2;
		}else if(s[i] == '-' && s[i+1] == '-'){
			res += '2';
			i += 2;
		}
	}
	cout<<res;
}