#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int>mpp;   //log(n) ->all cases (best,avg or worst)
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