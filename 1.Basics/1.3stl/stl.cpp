#include<bits/stdc++.h>
using namespace std;
void print(){
    cout << "abhishek" << endl;
}
int sum(int a,int b){
    return a+b;
}
void expair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int> >p={1,{3,4}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;
}
void exvector(){
    vector<int>v;   //vector declaration
    v.push_back(1);
    v.emplace_back(2);   //push faster

    vector<pair<int,int>>vec;  // vector of pairs
    v.push_back({1,2});
    v.emplace_back(1,2);      //automatically understood as pair

    vector<int>v(5,100);    //{100,100,100,100,100}
    vector<int>v(5);        //{0,674674,656,0,0} garbage
    vector<int>v1(5,20);    //{20,20,20,20,20}
    vector<int>v2(v1);      //{20,20,20,20,20}->copy of v1 not v1 itself

    vector<int>::iterator it=v.begin();  //it is pointing to the first element of vector
    it++;
    cout<< *(it) <<" ";  //star means value

    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();    //it is pointing to the after the last element of vector it--will be pointing to last element
    vector<int>::iterator it=v.rend();    //it is pointing to the before first element 
    vector<int>::iterator it=v.rbegin();  //pointing to last element and it++ will move it to second last element

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";   //last element

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    for(auto it=v.begin(); it!=v.end(); it++){  //sorter version  automatically takes data types
        cout<<*(it)<<" ";
    }
    for(auto it:v){         //for each loop iteration
        cout<<it<<" ";
    }
//deletion
    v.erase(v.begin()+1);   //{10,20,30,40} 20 will be deleted=>{10,30,40}
    //{10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);//v.erase(starting, after end(end+1));=>{10,20,35}

    //insertions
    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);  //{300,100,100}
    v.insert(v.begin(),+1,2,10);  //{300,10,10,100,100}  v.insert(starting position,no of elements,element)

    vector<int>copy(2,50);  //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());  //{50,50,300,10,10,100,100}  v.insert(where,startng index,end+1)

    //{10,10}
    cout<<v.size();//2

    //{10,20}
    v.pop_back();//{10}

    //v1->{10,20}
    //v2->{30,40}
    v1.swap(v2);//v2->{10,20},v1->{30,40}

    v.clear();//erase the entire vector

    cout<<v.empty();//boolean to check for empty vector
}

void exlist(){
    list<int>ls;    //{}
    ls.push_back(2);  //{2}
    ls.emplace_back(4);  //{2,4}

    ls.push_front(5);   //{5,2,4};  //cheaper than insert in vector in term of time complexity
    ls.emplace_front():{2,4};

    //rest function are similar to vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
void exdeque(){
    deque<int>dq;//{}
    dq.push_back(1); //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(4);    //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    dq.back();

    dq.front();

    //rest function are similar to vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
void exstack(){   //lifo
    stack<int>st;  //{}
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(3);    //{3,3,2,1}                      //all operation are of O(1)
    st.emplace(5);  //{5,3,3,2,1}

    cout<<st.top();  //5"st[2] is invalid"
    st.pop(); // remove 5
    cout<<st.top(); // print 3
    cout<<st.size(); // print  4 as {3,3,2,1} is remaining
    cout<<st.empty(); // return false

    stack<int>st1,st2;
    st1.swap(st2);
}
void exqueue(){   //lifo
    queue<int>q;  //{}
    q.push(1);    //{1}
    q.push(2);    //{1,2}
                                              //all operation are of O(1)
    q.emplace(4);  //{1,2,4}
    q.back()+=5;
    cout<<q.back();  //prints 9
    //q is {1,2,9}
    cout<<q.front();//prints 1
    q.pop(); //{2,9} removes 1
    cout<<q.front();//prints2
   //size,swap,empty same as stack
}
void expriorityqueue(){
    priority_queue<int>pq;//{}
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top();//prints 10
    pq.pop(); //{8,5,2}
    cout<<pq.top();//prints 8

    //size,swap,empty same as others

    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>>pq;  //{}
    pq.push(5); //{5}
    pq.push(2); //{2,5}  O(log(n))for push and pop
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top();//prints 2   O(1)

}
void exset(){
    set<int>st;//{} unique and sorted
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    //functionality of insert in vector can be used also,that only increases efficiency
    //begin(),end(),rbegin(),rend(),size(),empty(),and swap() are same

    //{1,2,3,4,5}
    auto it=st.find(3);  //return iterator which points to 3
    
    //{1,2,3,4,5}
    auto it=st.find(6); // return st.end() after 5

    //{1,4,5}
    st.erase(5);  //erase 5 in logarithmic time

    int cnt=st.count(1);  //either 1 or 0

    auto it=st.find(3);
    st.erase(it);  //takes constant time

    //{1,2,3,4,5}                                                      //all in O(log(n)) time
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);  //after erase{1,4,5}{first,last}
    //lower_bound() and upper_bound() function works in same way

    //syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}
void exmultiset(){
    multiset<int>ms;  //{}  only sorted
    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.insert(1);  //{1,1,1}

    ms.erase(1); //all 1 erased

    int cnt=ms.count(1);

    ms.erase(ms.find(1));  //erase only one 1 i.e address is deleted

    ms.eras(ms.find(1),ms.find(1)+2); // staring,after end

    //rest all function are same as set
}
void exuset(){
    unordered set<int>us;  //unique but not sorted
    //no upper_bound and lower_bound concept rest same as set
    //better than set in most cases, except when collision occurs
    //O(1)-O(n)
}
void exmap(){
    map<int,int>mpp;//key value pairs sorted according to key
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;
    mpp[1]=2;
    mpp.enplace({3,1});
    mpp.insert({2,4});
    mpp[{2,3}]=10;
    {
        {1,2}
        {2,4}
        {3,1}
    }
    for(auto it:mpp){                                           //O(log(n))
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1];   //2
    cout<<mpp[5];  //0

    auto it=mpp.find(3);
    cout<<*(it).second;

    auto it=mpp.find(5);  //mpp.end() after last element

        //syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
    //erase,swap,size,empty are same as above

}
void exMultimap(){
    //only mpp[key] cannot be used dublicate key can be stored
}
void exUnorderedMap(){      //O(1)
    //unique key but not in sorted order
    //same as set and unordered_set difference
}



bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    }else if(p1.second == p2.second){
        if(p1.second>p2.second)return true;
    }
    return false;
}



//algorithm
void exExtra(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
    pair<int,int> a[]={{1,2},{2,1},{4,1}};

    //sort according to second element
    //if second element is same,then sort according to first element but in descending order

    sort(a,a+n,comp);
    //{{4,1},{2,1},{1,2}};
    int num=7;
    int cnt=__builtin_popcount();  //3-111 binary
    long long num=1234566778899;
    int cnt=__builtin_popcountll();
    string s="123";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_petmutation(s.begin(),s.end()));

    int maxi=*max_element(a,a+n);  //min also
}




int main(){
    print();
    int s=sum(1,5);
    cout << s << endl;
    return 0;
}