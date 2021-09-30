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
	int n;
	vector<vector<int> > vect;
	int temp;
	cin>>n;
	for(int i = 0; i < n; i++){ 
	    vector<int> row;
	    for(int j = 0; j < n; j++){
	      cin>>temp;
	      row.push_back(temp);
	    }
	    vect.push_back(row);
	}
	int sum = 0;
	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j){
                sum += abs(vect[i][j] - vect[j][i]);
            }
        }
    }
    cout<<sum<<endl;


	
}