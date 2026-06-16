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
node* buildTree(node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for inserting in left node "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the data for inserting in right node "<<data<<endl;
    root->right=buildTree(root->right);
    return root; 
}
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
    void InOrder(node* root){
        if(root==NULL){
            return;
        }
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
    void PreOrder(node* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void PostOrder(node* root){
        if(root==NULL){
            return;
        }
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
int main(){
  node* root=NULL;
  root=buildTree(root);
  cout<<"level order transversal of binary tree"<<endl;
  levelOrderTransversal(root);
  cout<<endl;
  cout<<"Inorder transversal"<<endl;
  InOrder(root);
  cout<<endl;
  cout<<"PreOrder transversal"<<endl;
  PreOrder(root);
  cout<<endl;
  cout<<"PostOrder transversal"<<endl;
  PostOrder(root);
  cout<<endl;
  return 0;
}