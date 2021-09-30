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
	int a,b,c;
	bool flag = false;
	cin>>a>>b>>c;
	if(a==0){
		if(b==1 || c==1){
			flag = true;
		}
	}else{
		if(b==0 || c==0){
			flag = true;
		}
	}
	if(flag){
		cout<<"1"<<endl;
	}else{
		cout<<"0"<<endl;
	}
}