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
	vector<int> height;
	int temp;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>temp;
		height.push_back(temp);
	}
    int lbar = 1;
    int water = 0;
    int rbar = n-1;
    int lmax = height[0];
    int rmax = height[n];

    while(lbar <= rbar){
        if(height[lbar] >= lmax ){
            lmax = height[lbar];
            lbar++;
        }else if(height[rbar] >= rmax){
            rmax = height[rbar];
            rbar--;
        }else if(lmax <= rmax && height[lbar] < lmax){
            water += lmax - height[lbar];
            lbar++;
        }else{
            water += rmax - height[rbar];
            rbar--;
        }
    }
    
    cout<<water;
	
}

