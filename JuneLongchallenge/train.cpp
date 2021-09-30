#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void solve();

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
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	ll n,m;
	cin >> n >> m;
	ll narr[n];
	ll marr[m];
	for (int i = 0; i < n; i++)
	{
		cin >> narr[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> marr[i];
	}
	int left[n];
	int last = -1;
	for(int i = 0; i < n; i++){
		if(narr[i] == 1){
			left[i] = i;
			last = i;
		}else{
			left[i] = last;
		}
	}

	int right[n];
	last = -1;
	for(int i=n-1;i>=0;i--){
		if(narr[i]==2){
			right[i] = i;
			last = i;
		}else{
			right[i] = last;
		}
	}
		for(int i = 0; i < m; i++){
		int req = marr[i] -1;
		if(narr[req] !=0){
			cout<<0<<" ";
		}
		else if(req == 0){
			cout<<0<<" ";
		}
		else if(right[req]==-1 && left[req]==-1){
			cout<<-1<<" ";
		}else if(right[req] == -1 && left[req]!=-1){
			cout<< abs(req - left[req]) <<" ";
		}else if (right[req] !=-1 && left[req] == -1){
			cout<< abs(right[req] - req) <<" ";
		}
		else {
			cout<< min(abs(right[req] - req),abs(req-left[req])) <<" ";
		}
	}

	cout << "\n";
}