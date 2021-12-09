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
	int m[6][6];
	int row_index = -1;
	int column_index = -1;
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			cin>>m[i][j];
			if(m[i][j] != 0){
				row_index = i;
				column_index = j;
			}
		}
	}
	int res = abs(row_index - 3) + abs(column_index - 3);
	cout<<res;


}