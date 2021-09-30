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
	int n,p,k;
	cin>>n>>p>>k;
	int count = 0;
	int v=0,j=0,temp=0;
	for(int i = 0; i < n; i++){
		if(v <= (n - 1)/k){
			if(temp <= n){
				temp = (v * k) + j;
			}
		v++;
		count++;
		}else{
			v = 0;
			j++;
			i--;
		}
		if(temp == p){
			break;
		}
	}
	cout<<count<<endl;
}