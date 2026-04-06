/*#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    cout<<"size of stack is "<<s.size()<<endl;

}*/
//implementation of stack using array
/*#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
int *arr;
int top;
int size;
//behaviour
Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}
void push(int element){
    if(size-top>1){
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow";
    }
}
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"stack underflow";
    }
}
int peek(){
    if(top>=0 && top<size){
        return arr[top];
    }
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
}
bool isempty(){
    if(top == -1){
        return true;
    }
    else return false;
}
};
int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isempty()){
        cout<<"stack is empty";
    }
    else{
        cout<<"stack is not empty";
    }
return 0;
}*/
//#reverse a string using stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="love";
    stack<char> s;
    for(int i=0;i<str.length();i++){
     char ch=str[i];
     s.push(ch);
    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"answer is: "<<ans<<endl;
}