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
	string s;
	int size,count=0;
	bool flag = false;
	cin>>size;
	cin>>s;
	for(int i = 0; i < size; i++){
		if(s[i]== '1'){
			count++;
		}
	}
	if(size%2 !=0 ){
		if(count%2 != 0){
		for(int i = 0; i < size-1; i++){
			if(s[i] == s[i+1]){
				cout<<"Yes";
				flag =true;
				break;
			}
		}
		if(!flag){
			cout<<"No";
		}
		}else{
			cout<<"Yes";
		}
	}else{
		if(count%2 != 0){
			cout<<"No";
		}else{
			cout<<"Yes";
		}
	}
	
	
}