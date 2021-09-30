#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
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
	ll x,y;
	cin>>x>>y;
	ll count = 0;
	if(gcd(x,y) == 1){
		if(x%2 != 0 && y%2 != 0){
			if(gcd(x+1,y) != 1){
				count = 1;
			}else if(gcd(x,y+1) != 1){
				count = 1;
			}else{
				count = 2;
			}
		}else{
			count = 1;
		}
	}
	cout<<count<<"\n";
}