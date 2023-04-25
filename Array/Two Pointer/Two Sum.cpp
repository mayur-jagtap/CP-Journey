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
	vector<int> numbers;
	int target;
	int n;
	int temp;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>temp;
		numbers.push_back(temp);
	}
	cin>>target;
 	int left = 0;
    int right = numbers.size() - 1;
    while(left < right){
        if(numbers[left] + numbers[right] == target){
            cout<<left<<" "<<right;
            break;
        }else if(numbers[left] + numbers[right] < target){
            left++;
        }else{
            right--;
        }
    }
	
}

