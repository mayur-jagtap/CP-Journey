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
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	int min = INT_MAX;
	int max = INT_MIN;
	int min_index = -1,max_index = -1;
	for(int i = 0; i < n; i++){
		if(a[i] <= min){
			min = a[i];
			min_index = i;
		}
		if(a[i] > max){
			max = a[i];
			max_index = i;
		}	
	}
	int max_swap = max_index;
	int min_swap = n - min_index - 1;
	if(max_index > min_index){
		cout<<max_swap+min_swap -1;
	}else{
		cout<<max_swap+min_swap;
	}

}