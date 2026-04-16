#include<iostream>
#include<queue>
using namespace std;
 main(){
    queue<int> q;
    q.push(1);
    cout<<"front of q is:"<<q.front()<<"\n";
    q.push(2) ;
    cout<<"front of q is:"<<q.front()<<"\n";
    q.push(3);
    cout<<"size of queue:"<<q.size()<<"\n";
    q.pop();
    std::cout<<"size of queue:"<<q.size()<<"\n";
    if(q.empty()){
        cout<<"queue is empty";
    }
    else{
        cout<<"queue is not empty";
    }
    
}