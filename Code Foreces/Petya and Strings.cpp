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
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int res = 0;
	for(int i = 0; i < s1.size(); i++){
		if(tolower(s1[i]) < tolower(s2[i])){
			res = -1;
			break;
		}else if(tolower(s1[i]) > tolower(s2[i])){
			res = 1;
			break;
		}
	}
	cout<<res;
}