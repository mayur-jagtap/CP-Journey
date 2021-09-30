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
	int a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	if(a1==a2 && a2==a3 && a3==a4){
		cout<<"0"<<"\n";
	}else if(a1==a2 || a1==a3 || a1==a4 || a2==a3 || a2==a4 ||a3==a4){
		cout<<"2"<<"\n";
	}
	else if(a2==a3 && a3==a4 && a1!=a2){}

}