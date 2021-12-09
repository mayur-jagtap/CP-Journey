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
	int l[n],r[n];
	int lZeroCount=0,rZeroCount=0,lOneCount=0,rOneCount=0;
	for(int i = 0; i < n; i++){
		cin>>l[i];
		cin>>r[i];
		if(l[i]==0){
			lZeroCount++;
		}else{
			lOneCount++;
		}

		if(r[i] == 0){
			rZeroCount++;
		}else{
			rOneCount++;
		}
	}

	cout<<min(lOneCount,lZeroCount) + min(rOneCount,rZeroCount);


}