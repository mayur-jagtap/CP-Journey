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
	int r[2],w[2],c[2];
	for(int i = 0; i < 2; i++){
		cin>>r[i]>>w[i]>>c[i];
	}
	int countA=0,countB=0;
	for(int i = 0; i < 2; i++){
		if(r[0] > r[1]){
			countA++;
		}else{
			countB++;
		}
		if(w[0] > w[1]){
			countA++;
		}else{
			countB++;
		}
		if(c[0] > c[1]){
			countA++;
		}else{
			countB++;
		}
	}
	if(countA > countB){
		cout<<"A"<<endl;
	}else{
		cout<<"B"<<endl;
	}
	
}