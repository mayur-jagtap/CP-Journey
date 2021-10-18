#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
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
	testCase();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void testCase()
{
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];	
	}
	int k;
	cin>>k;
	list<int> l;
	int i=0,j=0;
	while(j<n){
		while(!l.empty() && l.back() < a[j]){
			l.pop_back();
		}
		l.push_back(a[j]);
		if(j-i+1 < k){
			j++;
		}else if(j-i+1 == k){
			cout<<l.front()<<" ";
			if(l.front() == a[i]){
				l.pop_front();
			}
			i++;
			j++;
		}
	}
}