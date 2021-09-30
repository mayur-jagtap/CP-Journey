#include<bits/stdc++.h>
#include <unordered_map>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int testCase(int N,int Q,vector<int> Array, vector<vector<int> > Queries)
{
	vector<int> ans(Q);
	for(int i = 0; i < Q; i++){
		
		int second_max = -1;
		int max = INT_MIN;
		for(int i = Queries[i][0] - 1; i < Queries[i][1]; i++){
			if(max < Array[i] ){
				max = Array[i];
			}
		}
		for(int i = Queries[i][0] - 1; i < Queries[i][1]; i++){
			if(second_max != max){
				if(second_max < Array[i])
					second_max = Array[i];
			}
		}
		unordered_map<int,int> x;
		int count=0;

			for(int k = 0; k < Q; k++){
				for(int i = Queries[i][0] - 1; i < Queries[i][1]; i++){
					x[Array[i]]++;
				}
				for(auto j:x){
					if(j.second == second_max){
						count++;
					}
			}
			ans[k] = count;
		}
		
	}

	return ans;
}

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
	int N;
	cin>>N;

	vector<int> Array(N);
	for(int i = 0; i < N; i++){
		cin>>Array[i];
	}
	int Q;
	cin>>Q;

	vector<vector<int> > Queries(Q, vector<int>(2));

	for(int i = 0; i < Q; i++){
		for(int j = 0; j < 2; j++){
			cin>>Queries[i][j];
		}
	}
	vector<int> out_;


	out_ = testCase(N,Q,Array,Queries);
	cout<<out_[0]<<endl;
	for(int i = 1; i < out_.size(); i++){
		cout<<out_[i]<<endl;
	}
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
