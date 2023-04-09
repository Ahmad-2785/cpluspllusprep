#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(string s){
    if(cnt==3) return; 
    cout<<s<<endl;
    cnt++;
    print(s);
}
int main(){
    print("Abhishek");
    return 0;
}