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
	int n = s.length();
	int upCount=0;
	int lowCount=0;
	for(int i = 0; i < n; i++){
		if(isupper(s[i])){
			upCount++;
		}else{
			lowCount++;
		}	
	}

	if(upCount > lowCount){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<s;
	}else{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s;
	}
}