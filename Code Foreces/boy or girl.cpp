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
	map<char,int> v;
	int count=0;
	for(int i = 0; i < s.size(); i++){
		if(v[s[i]] == 0){
			v[s[i]]++;
			count++;
		}
		v[s[i]]++;
	}
	if(count%2==0){
		cout<<"CHAT WITH HER!";
	}else{
		cout<<"IGNORE HIM!";
	}
}