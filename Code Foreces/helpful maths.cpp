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

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
}
void testCase()
{
	string s;
	cin>>s;
	vector<char> v;
	for(int i = 0; i < s.size(); i += 2){
			v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
	for(int i=0; i<v.size(); i++){
		if(i==v.size()-1){
			cout<<v[i];
		}else{
			cout<<v[i]<<"+";
		}
	}

}