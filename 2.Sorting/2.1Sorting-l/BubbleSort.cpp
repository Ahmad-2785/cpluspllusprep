#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n){  //adjacent swapping  O(n*n)worst and average 
    for(int i=n-1;i>=0;i--){
        int didSwap = 0;
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0) break;    //best O(n)
        // cout<<"Swapped\n";
    }
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubble_sort(arr,n);    
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}