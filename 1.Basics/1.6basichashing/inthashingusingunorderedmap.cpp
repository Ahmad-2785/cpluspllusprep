#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int,int>mpp;   //O(1) ->for cases (best,avg) and O(n) for worst case wu can use same type of key value pairs inside the unordered_map
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    //preprocessing
    // map<int,int>mpp;
    //  for(int i=0; i<n; i++){
    //     mpp[arr[i]]++;
    // }

    // for(auto it:mpp){
    //     cout<<it.first<<" => "<<it.second<<endl;
    // }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout<<mpp[number]<<endl;
    }
    return 0;
}