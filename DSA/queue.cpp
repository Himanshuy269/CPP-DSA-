//Queue
/*#include<iostream>
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
    
}*/
//Dequeue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<"\n";
    cout<<d.back()<<"\n";
    d.pop_back();
    if(d.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

}