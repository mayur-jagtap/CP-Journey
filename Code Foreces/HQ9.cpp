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
	getline(cin,s);
	bool flag = false;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			flag = true;
		}
	}
	if(flag){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}