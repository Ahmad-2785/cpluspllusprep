#include<bits/stdc++.h>
using namespace std;
void pattern1(int x,int y){
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern2(int x){
    for(int i=0;i<x;i++) {
        for(int j=0;j<=i;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern3(int x){
    for(int i=1;i<=x;i++) {
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        cout<<"\n";
    }
}
void pattern4(int x){
    for(int i=1;i<=x;i++) {
        for(int j=1;j<=i;j++) {
            cout<<i;
        }
        cout<<"\n";
    }
}
void pattern5(int x){
    for(int i=1;i<=x;i++) {
        for(int j=0;j<x-i+1;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern6(int x){
    for(int i=1;i<=x;i++) {
        for(int j=1;j<=x-i+1;j++) {
            cout<<j;
        }
        cout<<"\n";
    }
}
void pattern7(int x){
    for(int i=0;i<x;i++) {
        for(int j=0;j<x-i-1;j++) {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++) {
            cout<<"*";
        }
        for(int j=0;j<x-i-1;j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern8(int x){
    for(int i=0;i<x;i++) {
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        for(int j=0;j<2*x-(2*i+1);j++) {
            cout<<"*";
        }
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern10(int x){
    for(int i=1;i<=2*x-1;i++) {
        int stars=i;
        if(i>x) stars=2*x-i;
        for(int j=1;j<=stars;j++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern11(int x){
        int start=1;
    for(int i=0;i<x;i++) {
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++) {
            cout<<start;
            start=1-start;
        }
        cout<<"\n";
    }
}
void pattern12(int x){
    int space=2*(x-1);
    for(int i=1;i<=x;i++) {
        //number
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        //space
        for(int j=1;j<=space;j++) {
            cout<<" ";
        }
        //number
        for(int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<"\n";
        space-=2;
    }
}
void pattern13(int x){
   int num=1;
    for(int i=1;i<=x;i++) {
        for(int j=1;j<=i;j++) {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}
void pattern14(int x){
    for(int i=0;i<x;i++) {
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern15(int x){
    for(int i=0;i<x;i++) {
        for(char j='A';j<='A'+(x-i-1);j++) {
            cout<<j;
        }
        cout<<"\n";
    }
}
void pattern16(int x){
    for(int i=0;i<x;i++) {
        char ch='A'+i;
        for(int j=0;j<=i;j++) {
            cout<<ch;
        }
        cout<<"\n";
    }
}
void pattern17(int x){
    for(int i=0;i<x;i++) {
        //space
        for(int j=0;j<x-i-1;j++) {
            cout<<" ";
        }
        //alphabet
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++) {
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space
        for(int j=0;j<x-i-1;j++) {
            cout<<" ";
        }
        cout<<"\n";
    }
}
void pattern18(int x){
    for(int i=0;i<x;i++) {
        for(char c='E'-i;c<='E';c++) {
            cout<<c;
        }
        cout<<"\n";
    }
}
void pattern19(int x){
        int initsp=0;
    for(int i=0;i<x;i++){
        //stars
        for(int j=1;j<=x-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<initsp;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=x-i;j++){
            cout<<"*";
        }
        initsp+=2;
        cout<<endl;
    }
    initsp=2*x-2;
    for(int i=1;i<=x;i++){
                //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<initsp;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initsp-=2;
        cout<<endl;
    }
}
void pattern20(int x){
    int space=2*x-2;
    for(int i=1;i<=2*x-1;i++){
        int stars=i;
        if(i>x) stars=2*x-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<x) space-=2;
        else space+=2;
    }
}
void pattern21(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i==0||j==0||i==x-1||j==x-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
void pattern22(int x){
    for(int i=0;i<2*x-1;i++){
        for(int j=0;j<2*x-1;j++){
            int top=i;
            int left=j;
            int right=(2*x-2)-j;
            int bottom=(2*x-2)-i;
            cout<<(x-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}
int main(){
    int rows,cols;
    //cin >> rows >> cols;
    //pattern1(rows,cols);

    //cin>>rows;
    //pattern2(rows);

    // cin>>rows;
    // pattern3(rows);

    // cin>>rows;
    // pattern4(rows);

    // cin>>rows;
    // pattern5(rows);
    
    // cin>>rows;
    // pattern6(rows);
    
    // cin>>rows;
    // pattern7(rows);

    // cin>>rows;
    // pattern8(rows);
    
    //pattern9
    // cin>>rows;
    // pattern7(rows);
    // pattern8(rows);

        // cin>>rows;
        // pattern10(rows); 
        
        // cin>>rows;
        // pattern11(rows);

        // cin>>rows;
        // pattern12(rows);

        // cin>>rows;
        // pattern13(rows);

        // cin>>rows;
        // pattern14(rows);

        // cin>>rows;
        // pattern15(rows);

        // cin>>rows;
        // pattern16(rows);

        // cin>>rows;
        // pattern17(rows);

        // cin>>rows;
        // pattern18(rows);

        // cin>>rows;
        // pattern19(rows);

        //  cin>>rows;
        // pattern20(rows);

        // cin>>rows;
        // pattern21(rows);

        cin>>rows;
        pattern22(rows);
    return 0;
}