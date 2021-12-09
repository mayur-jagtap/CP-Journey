//https://leetcode.com/problems/k-th-symbol-in-grammar/submissions/

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
int kthGrammar(int n, int k) {
        if(n==1 && k==1){
            return 0;
        }
        int mid = (pow(2,n-1))/2;
        if(k <= mid){
            return kthGrammar(n-1,k);
        }else
            return !kthGrammar(n-1,k-mid);
    }
void testCase()
{
	int n,k;
	cin>>n>>k;
	cout<<kthGrammar(n,k);
}