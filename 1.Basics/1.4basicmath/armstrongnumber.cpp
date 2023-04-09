#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    int dup=n;
    while(n>0){
        int digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==dup)cout<<"true";
    else cout<<"false";
    return 0;
}