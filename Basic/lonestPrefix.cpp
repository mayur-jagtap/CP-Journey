#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

string prefix(vector<string> str)
{
	int minpos = str[0].length();
	for(int i = 0; i < str.size(); i++){
		int pos = 0;
		int j = 0;
		while(j<str[0].length() && j<minpos){
			if(str[i][pos] == str[0][pos]){
				pos++;
				j++;
			}else{
				break;
			}
		}
		minpos = min(pos,minpos);
	}
	return str[0].substr(0,minpos);
}


void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
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
	vector<string> str;
	string s;
	for(int i = 0; i < 2; i++){
		cin>>s;
		str.push_back(s);
	}
	int count = 0;
	
	cout<<prefix(str);
	// while(prefix(str) != ""){
	// 	rightRotate(str,1,str.size());
	// 	count++;
	// }
	
	
 	//cout<<count;
}




