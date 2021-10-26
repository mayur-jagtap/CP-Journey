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
		vector<int> nums;
		int temp;
		int n;
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>temp;
			nums.push_back(temp);	
		}	
	 	sort(nums.begin(),nums.end());
        int res = INT_MIN;
        unordered_map<int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        
        for(int i = 0; i < nums.size(); i++){
            res = max(res,freq[nums[i]] + freq[nums[i] + 1]);
        }
        cout<<res;
        
}