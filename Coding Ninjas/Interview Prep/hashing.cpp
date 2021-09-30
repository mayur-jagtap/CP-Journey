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

int t=1;
// cin>>t;

while(t--)
{
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	vector<int> chars(57,0);
	string s;
	cin >>s;
	for(int i = 0; i < s.size(); i++){
		chars[s[i] - 'A']++;
	}
 
	for(int i = 0; i < s.size(); i++){
		if(chars[s[i] - 'A']){
			cout<<s[i]<<" "<<chars[s[i] - 'A']<<endl;
			chars[s[i] - 'A'] = 0;
		}
	}
}