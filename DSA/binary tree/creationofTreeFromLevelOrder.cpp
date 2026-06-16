#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelOrderTransversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
    }
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
     node* temp=q.front();
     q.pop();
     cout<<"enter left node for"<<temp->data<<endl;
     int leftdata;
     cin>>leftdata;
     if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
     }
     cout<<"enter right node for"<<temp->data<<endl;
     int rightdata;
     cin>>rightdata;
     if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
     }
     }
    }
int main(){
  node* root=NULL;
  buildFromLevelOrder(root);
  levelOrderTransversal(root);
  return 0;
}
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1