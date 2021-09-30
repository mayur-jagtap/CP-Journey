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
	int a,b;
	cin>>a>>b;
	int sum=0,maxSum=INT_MIN,count=0;
	double k=2;
	for(int x = min(a,b); x <= max(a,b); x++){
		sum = ceil((b-x)/k) + ceil((x-a)/k);
		if(maxSum < sum){
			maxSum = sum;
		}
		if(count > 2){
		    break;
		}
		count++;
	}
	cout<<maxSum<<endl;
	
}