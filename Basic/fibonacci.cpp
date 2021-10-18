#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool isPerectSqrt(int x){
    int sq = sqrt(x);
    return (sq*sq == x); 
}



//recursion
int fibonacci(int n){
    if(n <= 1){
        return n; 
    }
    return fibonacci(n-1) + fibonacci(n-2);
}



//bottom up approach
int forfibonacci(int n){
    int a,b,c;
    if(n <= 1){
        return n;
    }
    a = 0;
    b = 1;
    n -= 2; 
    while(n > 0){
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}



//memoised solution with recursion
int mfibonacci(int arr[],int n){
    if(arr[n] != -1){
        return arr[n];
    }
    if(n <= 1){
        arr[n] = n;
        return n;
    }
    return arr[n] = mfibonacci(arr,n-1) + mfibonacci(arr,n-2);
 
}


bool isFiboo(int n){
    return(isPerectSqrt(5*n*n + 4) || isPerectSqrt(5*n*n - 4));
        
}

int required(int n){
    if(isFiboo(n)){
        return n;
    }
    int sum = 0;
    n -= 1;
    while(n > 0){
        if(isFiboo(n) && (n%2==0)){
            sum += n;

        }
        n--;
    }
    return sum;
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
    char* input1;
    cin>>input1;
    int n =  strlen(input1);
    long long int sum = 0;
    for(int i = 0; i < n; i++){
       sum += fibonacci(input1[i] - 'A');
    }
    cout<<sum;
    
    
}