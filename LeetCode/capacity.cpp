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
	vector<int> v;
	int temp,n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>temp;
		v.push_back(temp);
	}
	int i=0,j=n-1,mx=0,area=0;
	while(i<j){
		area = min(v[i],v[j])*(j-i);
		mx = max(area,mx);

		if(v[i] > v[j]){
			j--;
		}else{
			i++;
		}
		
	}
	cout<<mx<<endl;
	
}