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
/*#include<iostream>
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

}*/
//K queue in single array
#include<iostream>
using namespace std;
class KQueue{
    public:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int *next;
    int freespot;
    int index;
    KQueue(int n,int k){
        this->n=n;
        this->k=k;
        front=new int[k];
        rear=new int[k];
        arr=new int[n];
        next=new int[n];
        freespot=0;
        for(int i=0;i<k;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        for(int i=0;i<n-1;i++){
            next[i]=i+1;
        }
        next[n-1]=-1;
    }
    void enqueue(int data,int qn){
        if(freespot==-1){
            cout<<"no empty space available"<<endl;
            return;
        }
        int index=freespot;
        freespot=next[index];
        if(front[qn-1]==-1){
            front[qn-1]=index;
        }
        else{
            next[rear[qn-1]]=index;
        }
        next[index]=-1;
        rear[qn-1]=index;
        arr[index]=data;
    }
    int dequeue(int qn){
        if(front[qn-1]==-1){
            cout<<"queue underflow"<<endl;
            return -1;
        }
        int index=front[qn-1];
        front[qn-1]=next[index];
        next[index]=freespot;
        freespot=index;
        return arr[index];
    }
};
int main(){
 KQueue q(10,3);
 q.enqueue(10,1);
 q.enqueue(15,1);
 q.enqueue(20,2);
 q.enqueue(25,1);
 cout<<q.dequeue(1)<<endl;
 cout<<q.dequeue(2)<<endl;
 cout<<q.dequeue(1)<<endl;
 cout<<q.dequeue(1)<<endl;
 cout<<q.dequeue(1)<<endl;
}



