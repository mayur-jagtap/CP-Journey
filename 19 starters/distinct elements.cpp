#include<bits/stdc++.h>
#define ll long long int
#define printn(x) cout<<x<<"\n"
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
int solve(int m,int n){
 m = max(m,n);
 n = min(m,n);
 int x = m/n;
 int y = m%n;
 if(y==1){
    return y*n;
 }

 x += solve(y,n);
 return x;
}
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
    int m,n;
    cin>>m>>n;
	int x =solve(m,n);
    cout<<x;
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	string s;
	cin>>s;
   vector<int> v(26,0);
   for(int i = 0; i < s.size(); i++){
   		v[s[i]-'a']++;
       if(v[s[i]-'a'] > 1){
           cout<<false;
           return;
       }
   }
   cout<<true; 
}

