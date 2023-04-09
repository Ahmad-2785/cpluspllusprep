#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while(a>0 && b>0) {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    return a;
}
//O(log(phi)(m(a,b)))
int main(){
    int m,n;
    cin >>m>> n;
    cout<<gcd(m,n)<<endl;
    return 0;
}