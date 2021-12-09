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

int t;
cin>>t;

while(t--)
{
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

void insert(stack<int> &s,int temp){
	if(s.size() == 0){
		s.push(temp);
		return;
	}
	int ele = s.top();
	s.pop();
	insert(s);
}
void solve(stack<int> &s){
	if(s.size() == 1){
		return;
	}
	int temp = s.top();
	s.pop();
	solve(s);
	insert(s,temp);
}
void testCase()
{
	solve(stack);
}