//insertion at head
#include<iostream>
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
}