#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void testCase();
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
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
	ll n,sum=0;
	cin>>n;
	ll arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr,arr + n);
	ll result = arr[0];

	for(int i = 1; i < n-1; i++){
		result = gcd(arr[i], result);
 
        if(result == 1)
        {
           break;
        }
	}


	arr[n-1] = result;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i]/result;
	}
	cout<<sum<<endl;




}