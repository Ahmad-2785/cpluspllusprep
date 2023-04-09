#include<bits/stdc++.h>
using namespace std;
void printname(string name) {
    cout<<name<<endl;
}
int sum(int x, int y){
    return x+y;
}
int maxx(int x, int y){
    if(x>=y){
        return x;
    }
    return y;
}
//pass by value
void doSomething(int x){
    cout<<x<<endl;
    x=x+5;
    cout<<x<<endl;
    x=x+5;
    cout<<x<<endl;
    x=x+5;
}
//pass by reference
void doSomethingNew(int &x){
    cout<<x<<endl;
    x=x+5;
    cout<<x<<endl;
    x=x+5;
    cout<<x<<endl;
    x=x+5;
}
void editArr(int arr[],int n){
arr[0]+=100;
cout<<"Value inside function: "<<arr[0]<<endl;
}
int main(){
   /* 
   //print name
    cout<<"Abhishek";
   */

   /*
    //input-output
    int x,y;
    //input
    cin>>x>>y;
    //output
    cout<<x<<y;
    */

/*
   //data type : int, long,long long,float,double
   
   //long double x;
   //cin>>x;
    //cout<<x;

    //String,getline
    //string s;
    //cin>>s;
    //cout<<s;

    //string g;
   // getline(cin,g);
    //cout<<g;

    //character
    //char c='d';
    //cout<<c;
*/

/*
    //If-Else
    //int age;
    // cin >> age;
    // if(age<18)
    //     cout<<"You are not adult"<<endl;
    // else
    //     cout<<"You are an adult"<<endl;

    // int marks;
    // cin >>marks;
    // if(marks>=80)
    //     cout<<"A";
    // else if(marks>=60)
    //     cout<<"B";
    // else if(marks>=50)
    //     cout<<"C";
    // else if(marks>=45)
    //     cout<<"D";
    // else if(marks>=25)
    //     cout<<"E";
    // else
    //     cout<<"F";

    // int age;
    // cin >> age;
    // if(age<18)
    //     cout<<"not eligible for job."<<endl;
    // else if(age<=57){
    //     cout<<"eligible for job";
    //     if(age>=55)
    //         cout<<", but retirement soon.";
    // }
    // else
    //     cout<<"retirement time.";
*/

/*
//switch
    // int day;
    // cin >> day;
    // switch(day){
    //     case 1:
    //         cout<<"Monday";
    //         break;
    //     case 2:
    //         cout<<"Tuesday";
    //         break;
    //     case 3:
    //         cout<<"Wednesday";
    //         break;
    //     case 4:
    //         cout<<"Thrusday";
    //         break;
    //     case 5:
    //         cout<<"Friday";
    //         break;
    //     case 6:
    //         cout<<"Saturday";
    //         break;
    //     case 7:
    //         cout<<"Sunday";
    //         break;
    //     default:
    //         cout<<"Please Choose between 1-7";
    // }
*/
/*
    //arrays and strings
    //1-d
    // int n;
    // cin >>n;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin >>arr[i];
    // }
    // arr[4]+=100;
    // for (int i = 0; i < n; i++){
    //     cout <<arr[i]<<" ";
    // }
//2-d <error>
    // int r,c;
    // cin >>r>>c;
    // int arr[r][c];
    // for (int i = 0; i < r; i++){
    //     for (int j = 0; i < c; i++){
    //         cin >>arr[i][j];
    //     }
    // }
    //  for (int i = 0; i < r; i++){
    //     for (int j = 0; i < c; i++){
    //         cout <<arr[i][j];
    //     }
    // }
*/

/*
//string
    // string name="Abhishek";
    // cout<<name[5];
    // int length=name.size();
    // name[length-1]='Z';
    // cout<<name[length-1];
*/

/*
//loops-for,while do-while
    // for (int i=0;i<5;i++){
    //     cout<<"Abhishek ";
    // }
    // cout<<"\n";
    // int count=0;
    // while(count<5){
    //     cout<<"Abhishek ";
    //     count=count+1; //count++
    // }
    // cout<<"\n";
    // do{
    //     cout<<"Abhishek ";
    //     count++;
    // }while(count<1);
*/

/*
//functions->before main
// printname("Ram");
// printname("Shyam");
// int result=sum(5,7);
// cout<<result;

// int x=5,y=6;
// int max=maxx(x,y);
// cout<<max;
*/

/*
//inbuilt_functions
cout<<min(10,20);
cout<<max(10,20);
*/

//function
// int x=0;
// //pass by value (copy goes here)
// doSomething(x);
// cout<<x<<endl;
// //pass by reference [$] (address or original value is passed)
// doSomethingNew(x);
// cout<<x;

//array are always passed by reference
    int size=5;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >>arr[i];
    }
    editArr(arr,size);
    cout<<"Value inside Main: "<<arr[0]<<endl;
    

    return 0;
}