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
	int a[5][5];
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			cin>>a[i][j];
		}	
	}

	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			if((a[i][j] + a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1])%2 == 0){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}