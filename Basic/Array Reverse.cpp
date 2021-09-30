#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
void reversearray(int arr[],int n){
    int first = 0;
    int last = n-1;
    int temp;
    while(first < last){
    	temp = arr[first];
    	arr[first] = arr[last];
    	arr[last] = temp;
    	first++;
    	last--;
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
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	reversearray(arr,n);
	for (int i = 0; i < n; i++) {
	    cout << arr[i] << " ";
	}
}