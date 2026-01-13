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
/*#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
}
bool binarysearch(int *arr,int s,int e,int key){
    print(arr,s,e);
if(s>e){return false;}
int mid=s+(e-s)/2;
if(arr[mid]==key){
    return true;
}
if(arr[mid]>key){
    bool ans=binarysearch(arr,s,mid-1,key);
    return ans;
}
else{
bool ans=binarysearch(arr,mid+1,e,key);
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
}*/
//#reverse  string using recursion
/*#include<iostream>
using namespace std;
void reverse(string& s,int i,int j){
    cout<<endl<<s;
    if(i>j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    string s="hello";
    int i=0;
    int j=s.size()-1;
    reverse(s,i,j);
    cout<<endl<<s;
}*/
//palindrome string using recursion
 /*#include<iostream>
using namespace std;
bool ispalindrome(string& s,int i,int j){
     //cout<<endl<<s;
    if(i>j) return true;
    if(s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
    ispalindrome(s,i,j);
}
int main(){
    string s="hello";
    int i=0;
    int n=s.size();
    int j=n-1;
    ispalindrome(s,i,j);
    if(ispalindrome){
        cout<<endl<<"yes plaindrome";
    }
    else cout<<"not a palindrome";
}*/
//palindrome string using recursion with one pointer
/*
#include<iostream>
using namespace std;
bool ispalindrome(string& s,int i){
     //cout<<endl<<s;
     int n=s.size();
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]){
        return false;
    }
    i++;
    ispalindrome(s,i);
}
int main(){
    string s="hello";
    int i=0;
    ispalindrome(s,i);
    if(ispalindrome){
        cout<<endl<<"yes plaindrome";
    }
    else cout<<"not a palindrome";
}*/
//bubblesort suing recursion
/*#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
    if(n==1 || n==0) return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n-1);
}
int main(){
    int arr[]={3,4,7,8,3,5};
    int size=sizeof(arr)/4;
    bubblesort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}*/
//selection sort using recursion
/*#include<iostream>
using namespace std;
#include<limits.h>
void selectsort(int *arr,int n){
    if(n==1 || n==0) return;
    int min=INT_MAX;
        int minidx=-1;
    for(int i=0;i<n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        minidx=i;
        }
    }
        swap(arr[0],arr[minidx]);
    selectsort(arr+1,n-1);
}
int main(){
    int arr[]={3,4,7,8,3,5};
    int size=sizeof(arr)/4;
    selectsort(arr,size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}*/
//insertion sort using recursion
/*#include<iostream>
using namespace std;
void insertsort(int *arr,int n){
    if(n==1 || n==0) return;
    for(int i=1;i<=n-1;i++){
    while(arr[i]<arr[i-1]){
        swap(arr[i],arr[i-1]);
    }
    }
    insertsort(arr,n-1);
}
int main(){
    int arr[]={3,4,7,8,3,5};
    int size=sizeof(arr)/4;
    insertsort(arr,size);
    cout << "insertion Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}*/









