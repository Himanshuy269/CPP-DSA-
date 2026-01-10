// #include<iostream>
// using namespace std;
// void getdigit(int n,string arr[]){
//     if(n==0){
//         return;
//     }
//     int digit=n%10;
//     n/=10;
//     getdigit(n,arr);
//     cout<<arr[digit]<<" ";
// }
// int main(){
//     int n;
//     cout<<"enter number ";
//     cin>>n;
//     string arr[10]={"zero","one","two","three","four","five","six","seven"
//         ,"eight","nine"};
//         getdigit(n,arr);
// }
//isorted array??
/*#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    else if (arr[0]<arr[1]){
        return false;
    }
    else{
        bool ans=issorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[]={1,5,4,3,2,4};
    int n=6;//size
    bool ans=issorted(arr,n);
    if(ans){
        cout<<"array is sorted";
}
else {
    cout<<"not sorted";
}
}*/
//#array element sum using recursion
/*#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    if(size==0){
        return 0;
    }
    else if(size==1){
        return arr[0];
    }
    else{
        int sum=arr[0]+getsum(arr+1,size-1);
        return sum;
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int ans=getsum(arr,n);
    cout<<"sum of array is ->"<<ans;
}*/
//#Linear search using recursion
/*#include<iostream>
using namespace std;
bool search(int *arr,int size,int key){
    if(size==0){return false;}
    // else if(size==1){
        if(arr[0]==key){
            return true;
    }
    else{
        bool ans=search(arr+1,size-1,key);
        return ans;
    }
}
int main(){
    int arr[]={1,3,4,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=99;
    bool ans= search(arr,n,key);
    if(ans){
        cout<<"found";
    }
        else{
            cout<<"not found";
        }
    } */
/*#binary search using recursion*/
#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int key){
if(s>e){return false;}
int mid=s+(e-s)/2;
if(arr[mid]==key){
    return true;
}
if(arr[mid]>key){
    bool ans=binarysearch(arr,s,e-1,key);
    return ans;
}
else{
bool ans=binarysearch(arr,s+1,e,key);
return ans;}
}
int main(){
int arr[]={1,2,3,4,5,7,8,9};
int size=9;
int key=4;
int s=0;
int e=size-1;
int ans=binarysearch(arr,s,e,key);
if(ans){
    cout<<"element found";
}
else cout<<"not found";

}