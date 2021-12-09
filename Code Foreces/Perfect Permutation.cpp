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
	int n;
	cin>>n;
	int a[n];
	for(int i = 1; i <= n; i++){
		a[i] = i;	
	}
	for(int i = 1; 2*i <= n; i++){
		swap(a[(2*i) - 1],a[2*i]);
	}
	if(n%2==0){
		for(int i = 1; i <= n; i++){
			cout<<a[i]<<" ";
		}
	}else{
		cout<<-1;
	}
}