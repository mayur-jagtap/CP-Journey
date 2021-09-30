#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void testCase();


bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
   
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
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
	int d,p,n;
	cin>>d>>p;
	n = d/p;
	int i = 1;
	int count = 0;
	while(i<=n){
		int x = 0;
		bool flag = true;
		while(x<p){
			if(isPrime((x*n)+i)){
				x++;
			}else{
				flag = false;
				break;
			}
		}
		if(flag){
			count++;
		}
		i++;
	}
	cout<<count<<endl;


}