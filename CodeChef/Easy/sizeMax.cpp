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
	ll n, size;
    vector<ll>v;
    while(true){
        cin>>n;
        v.push_back(n);
        if(getchar()!=' ') break;
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]==v.size()-1){
            v.erase(v.begin()+i);
            break;
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1] << "\n";
}