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
	cin>>s;
	int k;
	cin>>k;

	map<char,int> mp;
	int count = 0,mx=0;
	int i=0,j=0;
	while(j < s.size()){
		mp[s[j]]++;
		if(mp.size() < k){
			j++;
		}else if(mp.size() == k){
			mx = max(mx,j-i+1);
			j++;
		}else if(mp.size() > k){
			int index = i;
			while(mp[s[index]]!=0){
               mp[s[i]]--;
               i++;
           }
			mp.erase(mp.find(s[index]));
			j++;
		}
	}
	cout<<mx;
}