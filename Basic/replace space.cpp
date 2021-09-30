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

int t = 1;

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
	// for getting multiple words in a single string(taking whole line as input as string)
	getline(cin,s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			s.erase(i,1);
			s.insert(i,"_");// insert whole string 
		}
	}
	cout<<s;

}