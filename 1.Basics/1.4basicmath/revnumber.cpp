#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int revno=0;
    while(n>0){
        int digit=n%10;
        revno=(revno*10)+digit;
        n=n/10;
    }
    cout<<revno<<endl;
    return 0;
}