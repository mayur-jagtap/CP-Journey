#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;


int min_index(int a[]){
	int start = 0,n=10, end = 9,mid,prev,next;
	while(start <= end){
		mid = (start+end)/2;
		prev = (mid+n-1)%n;
		next = (mid+1)%n;
		if(a[mid] <= a[next] && a[mid] <= a[prev]){
			return mid;
		}else if(a[mid] <= a[end]){
			end = mid - 1;
		}else if(a[start] <= a[mid]){
			start = mid + 1;
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
	int a[10] = {10,11,12,13,14,2,3,4,5,6};
	

}