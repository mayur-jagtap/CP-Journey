#include<iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1] < a[j]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }//end of else
        }//end inner of for loop
    }//end outer of for loop
}


int main()
{
    int i,j,a[50],n=5,m;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    return(0);
}

