#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

// int min_index(vector<int>& a){
// 	int n = a.size();
// 	int start = 0,end = n-1,mid,prev,next;
// 	while(start <= end){
// 		mid = (start+end)/2;
// 		prev = (mid+n-1)%n;
// 		next = (mid+1)%n;
// 		if(a[mid] <= a[next] && a[mid] <= a[prev]){
// 			return mid;
// 		}else if(a[mid] <= a[end]){
// 			end = mid - 1;
// 		}else if(a[start] <= a[mid]){
// 			start = mid + 1;
// 		}
// 	}
// 	return -1;
// }


int findMin(vector<int>& a) {
        int end = a.size()-1, start = 0, mid;
        while (start <= end) {
            mid = start+ (end - start) / 2;
            if (a[mid] > a[end]){
            	start = mid + 1;
            }else if(a[mid] < a[end]){
            	 end = mid;
            }else{
            	end--;
            } 
        }
        return start;
 }



int binary_search(vector<int> &a,int start,int end,int target){
    if(start <= end){
        int mid = (start+end)/2;
    	if(target == a[mid]){
    		return mid;
    	}else if(target < a[mid]){
    		return binary_search(a,start,mid-1,target);
    	}else if(target > a[mid]){
    		return binary_search(a,mid+1,end,target);
    	} 
    }
	return -1;
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
   	vector<int> nums;
    int temp;
   	for(int i = 0; i < n; i++){
   		cin>>temp;
   		nums.push_back(temp);	
   	}
   	int index = findMin(nums);
	int target;
	cin>>target;
 	int res1 = binary_search(nums,index,n-1,target);
	int res2 = binary_search(nums,0,index-1,target);
	if(res1 != -1 || res2 != -1){
		cout<<"true";
	}else{
		cout<<"false";
	}


}