#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}
int main(){
    int num;
    cin >> num;
    cout<<count(num)<<endl;
    return 0;
}