#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int nearly_bs(vector<int> &a,int start, int end,int target){
	while(start <= end){
		int mid = (start+end)/2;
		if(target == a[mid]){
			return mid;
		}else if(mid > start && target == a[mid-1]){
			return mid-1;
		}else if(mid < end && target == a[mid+1]){
			return mid+1;
		}else if(target < a[mid]){
			return nearly_bs(a,start,mid-2,target);
		}else if(target > a[mid]){
			return nearly_bs(a,mid+2,end,target);
		}
	}
	return -1;
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
	vector<int> a;
	int temp;
	for(int i = 0; i < n; i++){
		cin>>temp;
		a.push_back(temp);
	}
	int target;
	cin>>target;
	int res = nearly_bs(a,0,n-1,target);
	cout<<res;

	// for(int i = 0; i < n; i++){
	// 	cout<<a[i];	
	// }

}