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
	string s;
	cin>>s;
	ll count=0;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(s[i] == '7' || s[i] == '4'){
			count++;
		}	
	}
	bool flag = false;
	while(count){
		if(count%10 == 7 || count%10 == 4){
			count /= 10;
			flag =  true;
		}else{
			flag = false;
			break;
		}
	}
	if(flag== true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


}