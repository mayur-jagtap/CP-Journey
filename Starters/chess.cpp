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
	int x,y;
	cin>>x>>y;
	if((x+y) < 3){
		cout<<"1"<<endl;
	}else if((x+y) <=10){
		cout<<"2"<<endl;
	}else if((x+y) <=60){
		cout<<"3"<<endl;
	}else{
		cout<<"4"<<endl;
	}
}