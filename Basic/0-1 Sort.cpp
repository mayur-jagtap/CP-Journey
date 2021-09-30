#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void sort01(int a[],int n){
	int i=0,j=n-1;
	while(i < j)
	{
		if(a[i] == 0){
			i++;
		}
		if(a[j] == 1){
			j--;
		}
		if(a[i] == 1 && a[j] == 0){
			swap(a[i++],a[j--]);
		}
	}
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

int t = 1;

while(t--)
{
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	int a[5] = {0,1,1,0,1};
	int n = 5;
	sort01(a,n);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";	#include<bits/stdc++.h>
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
		}
	}
}