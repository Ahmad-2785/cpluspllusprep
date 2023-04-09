#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1) return n;
    return f(n-1)+f(n-2);
}
int main(){
    cout<<f(9);
    return 0;
}
//0 1 1 2 3 5 8 13 21 34