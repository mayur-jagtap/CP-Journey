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
void solve(string ip,string op){
	if(ip.length()==0){
		cout<<op<<" ";
		return;
	}
	string op1 = op;
	string op2 = op;
	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0);
	solve(ip,op1);
	solve(ip,op2);

}
void solve1(string ip,string op){
	if(ip.length() == 0){
		cout<<op<<" ";
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back('_');
	op1.push_back(ip[0]);
	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);
	solve1(ip,op1);
	solve1(ip,op2);
	return;

}
void letterCase(string ip, string op){
	if(ip.length() == 0){
		cout<<op<<" ";
		return;
	}
	string op1 = op;
	string op2 = op;
	op1.push_back(ip[0]);
	op2.push_back(toupper(ip[0]));
	ip.erase(ip.begin() + 0);
	letterCase(ip,op1);
	letterCase(ip,op2);
	return;
}
void testCase()
{
	string ip;
	cin>>ip;
	string op;
	solve(ip,op);

}