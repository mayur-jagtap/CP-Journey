#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;


int right_search(vector<int> A, int num)
{
    
    int low = 0, high = A.size() - 1;
    int ans = high;
 
    while (low <= high)
    {
 
        int mid = low + (high - low) / 2;
        
        if (A[mid] <= num)
        {
 
            ans = mid;
 
    
            low = mid + 1;
        }
        else
        {
 
      
            high = mid - 1;
        }
    }
 
    return ans;
}

int left_search(vector<int> A, int num)
{
    
    int low = 0, high = A.size() - 1;
    int ans = 0;
 
    while (low <= high)
    {
 
       
        int mid = low + (high - low) / 2;
 
     
        if (A[mid] >= num)
        {
 
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
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
	int N,M;
	cin>>N>>M;
	vector<vector<int> > A(N,vector<int>(M));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
				cin>>A[i][j];
			}	
	}
	int Q;
	cin>>Q;
	int S;
	cin>>S;
	vector<vector<long long> > Queries(Q,vector<long long>(2));
	for(int i = 0; i < Q; i++){
		for(int j = 0; j < 2; j++){
				cin>>Queries[i][j];
			}	
	}
	

	vector<int> row_sum(N);
 
    
    vector<int> col_sum(N);
 
  
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
 
            row_sum[i] += A[i][j];
            col_sum[j] += A[i][j];
        }
    }
 
    vector<int> sum_list;
 
    
    for (int i = 0; i < N; i++)
        sum_list.push_back(row_sum[i]);
 
    
    for (int i = 0; i < M; i++)
        sum_list.push_back(col_sum[i]);
 
 
    sort(sum_list.begin(), sum_list.end());

    for (int i = 0; i < Q; i++)
    {
        int L = Queries[i][0];
        int R = Queries[i][1];
 
        
        int l = left_search(sum_list, L);
 
        int r = right_search(sum_list, R);
 
        cout << r - l + 1 << " ";
    }
}
	



