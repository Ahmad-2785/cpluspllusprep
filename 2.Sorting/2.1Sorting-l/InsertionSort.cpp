#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){     //O(n*n) worst,avg best O(n)
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    insertion_sort(arr,n);    
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}