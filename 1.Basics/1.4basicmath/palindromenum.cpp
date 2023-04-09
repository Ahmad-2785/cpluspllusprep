#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int revno=0;
    int dup=n;
    while(n>0){
        int digit=n%10;
        revno=(revno*10)+digit;
        n=n/10;
    }
    if(dup==revno)cout<<"true";
    else cout<<"false";
    return 0;
}