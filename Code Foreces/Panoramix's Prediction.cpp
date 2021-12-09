#include<bits/stdc++.h>
#define ll long long int
#define printn(x) cout<<x<<"\n"
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool isPrime(int n){
	if(n < 2){
		return false;
	}
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;

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
	int n,m;
	cin>>n>>m;
	while(1){
		n++;
		if(isPrime(n)){
			if(n==m){
				cout<<"YES";
				break;
			}else{
				cout<<"NO";
				break;
			}
			
		} 
	}
	
}