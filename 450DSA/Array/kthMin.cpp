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
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	int max = INT_MIN;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
		if(max < arr[i]){
			max = arr[i];
		}
	}
	vector<int> v(max+1,-1);
	for(int i = 0; i < n; i++){
		v[arr[i]] = arr[i];
	}
	int count=0;
	for(int i = 0; i < max+1; i++){
		if(v[i] != -1){
			count++;
			if(count==k){
				count = v[i];
				break;
			}
		}
	}
	cout<<count<<endl;
	


}
