//insertion at head
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data= data;
        this -> next= NULL;
    }
};
void insertathead(node* &head,int data){
      node* temp= new node(data);
      temp-> next=head;
      head=temp;
}
void print( node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp -> data<<endl;
        temp=temp ->  next;
    }
}
int main(){
node* node1=new node(10); //create a new node
//cout<<node1 -> data << endl;
//cout<<node1 -> next <<endl;
node* head=node1;
print(head);
insertathead(head,12);
print(head);
}*/
//insertion at tail
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data= data;
        this -> next= NULL;
    }
};
void insertattail(node* &tail,int data){
      node* temp= new node(data);
      tail ->next =temp;
      tail=tail -> next;  //or tail=temp
}
void print( node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp -> data<<endl;
        temp=temp ->  next;
    }
}
int main(){
node* node1=new node(10); //create a new node
//cout<<node1 -> data << endl;
//cout<<node1 -> next <<endl;
node* tail=node1;
print(tail);
insertattail((tail),12);
print(tail);
}*/
//insertion at tail
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data= data;
        this -> next= NULL;
    }
};
void insertathead(node* &head,int data){
      node* temp= new node(data);
      temp-> next=head;
      head=temp;
}
void insertattail(node* &tail,int data){
      node* temp= new node(data);
      tail ->next =temp;
      tail=tail -> next;  //or tail=temp
}
void insertatposition(node* &tail,node* &head,int position,int d){
    //insert at start
    if(position==1){
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;//current position
    while(cnt<position-1){
        temp=temp -> next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert -> next = temp-> next;
    temp->next = nodetoinsert;
    
}
void print( node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp -> data<<endl;
        temp=temp ->  next;
    }cout<<endl;
}
int main(){
node* node1=new node(10); //create a new node
//cout<<node1 -> data << endl;
//cout<<node1 -> next <<endl;
node* head=node1;
node* tail=node1;
print(head);
insertattail(tail,12);
print(head);
insertattail(tail,15);
print(head);
insertatposition(tail,head,3,22);
print(head);
cout<<"head"<<head->data <<endl;
cout<<"tail"<<tail->data<<endl;
}*/
//deletion of node
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data= data;
        this -> next= NULL;
    }
    ~node(){
        int value= this-> data;
        //memory free
        if(this -> next!=NULL){
        delete next;
        this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};                  
void insertathead(node* &head,int data){
      node* temp= new node(data);
      temp-> next=head;
      head=temp;
}
void insertattail(node* &tail,int data){
      node* temp= new node(data);
      tail ->next =temp;
      tail=tail -> next;  //or tail=temp
}
void insertatposition(node* &tail,node* &head,int position,int d){
    //insert at start
    if(position==1){
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;//current position
    while(cnt<position-1){
        temp=temp -> next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    //creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert -> next = temp-> next;
    temp->next = nodetoinsert;
}
void print( node* &head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp -> data<<endl;
        temp=temp ->  next;
    }cout<<endl;
}
void deletenode(int position,node* &head,node* &tail){
    if(position==1){
        node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;  
    }
    else{
        //deleting any middle node or last node
        node* curr= head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr-> next;
            cnt++;
        }
        prev->next=curr->next;
        if(curr->next == NULL)  // deleting last node
        tail = prev;
        curr->next = NULL; //if i do use this line code(214)
        delete curr;// and if i use delete head then all elements are deleted
    }
}
int main(){     
node* node1=new node(10); //create a new node
//cout<<node1 -> data << endl;
//cout<<node1 -> next <<endl;
node* head=node1;
node* tail=node1;
print(head);
insertattail(tail,12);
print(head);
insertattail(tail,15);
print(head);
insertatposition(tail,head,3,22);
print(head);
cout<<"head"<<head->data <<endl;
cout<<"tail"<<tail->data<<endl;
deletenode(3,head,tail);
print(head);
}*/
//Doubly Linked List
//insertathead
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    //constructor
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
cout<<endl;
}
//length of linked list
int getlength(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertathead(node* &head,int data){
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp; 
}
int main(){
node* node1=new node(10);
node* head=node1;
print(head);
cout<<getlength(head)<<endl;
insertathead(head,11);
print(head);
insertathead(head,13);
print(head);
insertathead(head,8);
print(head);
return 0;
}*/
