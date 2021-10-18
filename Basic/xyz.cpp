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
	int n,k,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		if(a[i] == k)
		{
			count++;
			a[i] = 0;
		}
		else if(a[i] < k)
		{
			int dif = k - a[i];
			float low = lower_bound(a , a+n , dif);
			if(low != a+n)
			{
				count++;
				a[i] = 0;
				a[low-a+1] = 0;
				//cout<<low-a+1<<endl;
			}
		}
	}
	cout<<count;
}