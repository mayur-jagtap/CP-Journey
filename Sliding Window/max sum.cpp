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
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	int k;
	cin>>k;
	int i=0,j=0,mx=0,sum=0;
	while(j<n){
		sum += a[j];
		if(j-i+1 < k){
			j++;
		}else if(j-i+1 == k){
			mx = max(sum,mx);
			sum = sum - a[i];
			i++;
			j++; 
		}
	}
	cout<<mx;
}