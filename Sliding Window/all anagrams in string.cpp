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
	string target;
	cin>>target;
	int k = target.size();
	map<char,int> mp;
	for(int i = 0; i < k; i++){
		mp[target[i]]++;
	}
	int count = mp.size();
	int i=0,j=0;
	vector<int> ans;
	while(j<s.size()){
		if(mp.find(s[j]) != mp.end()){
			mp[s[j]]--;
			if(mp[s[j]] == 0){
				count--;
			}
		}	
		if(j-i+1 < k){
			j++;
		}else if(j-i+1 == k){
			if(count == 0){
				ans.push_back(i);
			}
			if(mp.find(s[i]) != mp.end()){
				mp[s[i]]++;
				if(mp[s[i]] == 1){
					count++;
				}
			}
			i++;
			j++;
		}
	}
	for(int i=0; i < ans.size();i++){
	    cout<<ans[i]<<" ";
	}
}