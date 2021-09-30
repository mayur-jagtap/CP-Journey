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
	int arr[6];
	int n = 6;
	if(n==1){
		cout<<"0";
	}
	if(arr[0] >= arr[1]){
		cout<<"0";
	}
	if(arr[n-1] >= arr[n-2]){
		cout<<n-1;
	}
	for(int i = 1; i < n; i++){
		if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
			cout<<i;
		}
	}
} 