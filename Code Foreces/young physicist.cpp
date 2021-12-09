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

int t = 1;


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
	int x[n],y[n],z[n];
	int sum1=0,sum2=0,sum3=0;
	for(int i = 0; i < n; i++){
		cin>>x[i];
		cin>>y[i];
		cin>>z[i];
		sum1 += x[i];
		sum2 += y[i];
		sum3 += z[i];
	}
	
	if(sum1 == 0 && sum2 == 0 && sum3 == 0){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}