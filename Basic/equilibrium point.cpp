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
	int arr[5] = {6,2,-11,13,4};
	int sum = 0;
	int n=5,equilibirium_point=-1;
    int leftsum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        sum -= arr[i];
        if(leftsum == sum){
            equilibirium_point = i;
            break;
        }
        leftsum += arr[i];
    }
    cout << equilibirium_point;
}