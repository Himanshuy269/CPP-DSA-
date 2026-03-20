//circular Linked List
//inserting node
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;        
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node"<<value<<endl;
    }

};
void insertnode(node* &tail,int element,int data){
    //assuming element is present 
    //if list is empty 
    if(tail==NULL){
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non-empty List
        //assuming that the element is present in the list
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found -> curr is representing elemnt wla node
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }    
}
void print(node* tail){
    node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;  
    }
     while(tail!=temp);
    //{
    //     cout<<tail->data<<" ";
    //     tail=tail->next;
    // }
    cout<<endl;
}
int main(){
node* tail=NULL;
insertnode(tail,5,3);
print(tail);
insertnode(tail,3,5);
print(tail);
insertnode(tail,5,7);
print(tail);
insertnode(tail,7,9);
print(tail);
insertnode(tail,5,6);
print(tail);
insertnode(tail,9,10);
print(tail);
insertnode(tail,3,4);
print(tail);
return 0;
}*/
//#deleting node in circular linked list
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;        
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node"<<value<<endl;
    }

};
void insertnode(node* &tail,int element,int data){
    //assuming element is present 
    //if list is empty 
    if(tail==NULL){
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non-empty List
        //assuming that the element is present in the list
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found -> curr is representing elemnt wla node
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }    
}
void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"; 
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;  
    }
     while(tail!=temp);
    //{
    //     cout<<tail->data<<" ";
    //     tail=tail->next;
    // }
    cout<<endl;
}
void deletenode(node* &tail,int value){
    //if empty List
    if(tail==NULL){
        cout<<"list is empty ,please check again";
    }
    else{
        node *prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 node List
        if(curr==prev){
            tail=NULL;
        }
        else if(curr==tail){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
node* tail=NULL;
 insertnode(tail,5,3);
 print(tail);
// insertnode(tail,3,5);
// print(tail);
// insertnode(tail,5,7);
// print(tail);
// insertnode(tail,7,9);
// print(tail);
// insertnode(tail,5,6);
// print(tail);
// insertnode(tail,9,10);
// print(tail);
// insertnode(tail,3,4);
// print(tail);
deletenode(tail,3);
print(tail);
return 0;
}*/
//doubly circular linked list
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;  
    node* prev;      
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node(){
        int value = this->data;
        cout << "memory is free for node " << value << endl;
    }
};
void insertnode(node* &tail, int element, int data){
    // empty list
    if(tail == NULL){
        node* newnode = new node(data);
        tail = newnode;
        newnode->next = newnode;
        newnode->prev = newnode;
    }
    else{
        // assuming element is present
        node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        node* temp = new node(data);
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;
    }    
}
void print(node* tail){
    if(tail == NULL){
        cout << "list is empty";
        return;
    }
    node* temp = tail;
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }
    while(tail != temp);
    cout << endl;
}
void deletenode(node* &tail, int value){
    if(tail == NULL){
        cout << "list is empty, please check again";
        return;
    }
    node* curr = tail;
    while(curr->data != value){
        curr = curr->next;
    }
    // single node case
    if(curr->next == curr){
        tail = NULL;
    }
    else{
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        if(curr == tail){
            tail = curr->prev;
        }
    }
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}
int main(){
    node* tail = NULL;
    insertnode(tail, 5, 3);
    print(tail);
    insertnode(tail, 3, 5);
    print(tail);
    insertnode(tail, 5, 7);
    print(tail);
    deletenode(tail, 3);
    print(tail);
    return 0;
}*/
//isCircularORnot
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;        
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node"<<value<<endl;
    }

};
void insertnode(node* &tail,int element,int data){
    //assuming element is present 
    //if list is empty 
    if(tail==NULL){
        node* newnode=new node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
        //non-empty List
        //assuming that the element is present in the list
        node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //element found -> curr is representing elemnt wla node
        node* temp=new node(data);
        temp->next=curr->next;
        curr->next=temp;
    }    
}
void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"; 
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;  
    }
     while(tail!=temp);
    //{
    //     cout<<tail->data<<" ";
    //     tail=tail->next;
    // }
    cout<<endl;
}
void deletenode(node* &tail,int value){
    //if empty List
    if(tail==NULL){
        cout<<"list is empty ,please check again";
    }
    else{
        node *prev=tail;
        node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 node List
        if(curr==prev){
            tail=NULL;
        }
        else if(curr==tail){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
bool isCircular(node* head){
    if(head==NULL){ return true;}
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){ return true ;}
    return false;
}
int main(){
node* tail=NULL;
 insertnode(tail,5,3);
 //print(tail);
insertnode(tail,3,5);
// print(tail);
// insertnode(tail,5,7);
// print(tail);
// insertnode(tail,7,9);
// print(tail);
// insertnode(tail,5,6);
// print(tail);
// insertnode(tail,9,10);
// print(tail);
// insertnode(tail,3,4);
// print(tail);
//deletenode(tail,3);
//print(tail);
if(isCircular(tail)){
    cout<<"list is circular";
}
else cout<<"list is not circular";
return 0;
}
