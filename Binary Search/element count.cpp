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
	int a[10] = {1,4,4,4,4,4,4,5,6,7};
	int start = 0, end = 9,mid,first_occurrence=-1,last_occurrence=-1;
	int target;
	cin>>target;
	while(start <= end){
		mid = (start + end) / 2;
		if(target == a[mid]){
			first_occurrence = mid;
			end = mid - 1;
		}else if(target < a[mid]){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
	}
	start = 0,end = 9 ;
	while(start <= end){
		mid = (start + end) / 2;
		if(target == a[mid]){
			last_occurrence = mid;
			start = mid + 1;
		}else if(target < a[mid]){
			end = mid - 1;
		}else{
			start = mid + 1;
		}
	}
	cout<<last_occurrence - first_occurrence + 1;
}