#include<bits/stdc++.h>
#define ll long long int
#define printn(x) cout<<x<<"\n"
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
long long int gcd(long long int a,long long int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a % b);
}
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
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	int res[n];
	res[0] = a[0];
	for(int i = 1; i < n; i++){
			res[i] = gcd(a[i],res[i-1]);
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(a[i] != res[i]){
			flag = 1;
		}	
	}
	if(flag){
		printn(-1);
	}else{
		for(int i = 0; i < n; i++){
			cout<<res[i]<<" ";	
		}
		cout<<"\n";
	}


}