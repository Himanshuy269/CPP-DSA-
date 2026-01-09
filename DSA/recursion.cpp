#include<iostream>
using namespace std;
void getdigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int digit=n%10;
    n/=10;
    getdigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven"
        ,"eight","nine"};
        getdigit(n,arr);
}