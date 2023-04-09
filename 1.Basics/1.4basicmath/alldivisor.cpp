#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n){
    vector<int>ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    //O(nlog(n))
    sort(ls.begin(), ls.end());
    for(auto it:ls) cout<<it<<" ";
}

int main(){
    int n;
    cin >> n;
    printdivisor(n);
    return 0;
}