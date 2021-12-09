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
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int j = 0; j < t; j++){
		int i = 0;
		while(i<n-1){
			if(s[i] == 'B' && s[i+1] == 'G'){
				char temp = s[i];
				s[i] = s[i+1];
				s[i+1] = temp;
				i += 2;
			}else{
				i++;
			}
		}
	}
	cout<<s;

}

