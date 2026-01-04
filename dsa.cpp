// #include<iostream>
// using namespace std;
// int main(){
//     int a=12 & 1;
//     cout<<a;
// }
//decimal to binary
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=-5;
    float ans=0;
    int i=0;
    //int place=1;
    while(n!=0){
        int bit=n&1;
        ans=(pow(10,i)*bit)+ ans; //or use ans=(place*bit)+ ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    cout<<"hii";
    return 0;
}*/
//reference variable
// #include<iostream>
// #include<math.h>
// using namespace std;
// int& update(int a){
//     int&num =a;
    
// }
// int main(){
//     int i=2;
//     int& j=i;
//     update(i);
//     cout<<i<<endl;
//     j++;
//     cout<<i;
// }
//#hashmap for array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     int hash[7]={0};
//     for(int i=0;i<=n;i++){
//         hash[arr[i]]+=1;
//     }
//     int q;
//     cin>>q;// no of element you want to fetch
//     while(q--){
//         int number;
//         cin>>number;//enter the number to print its frequency
//         //fetch
//         cout<<hash[number];
//     }
//     cout<<hash[1];
// }
/*#include<iostream>
uing namespace std;
int main(){
    string s;
    cin>>s;
    //precompute
    int hashh[256];
    for(int i=0;i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    int q;
    cin>>q;// no of element you want to fetch
    while(q--){
        char c;
        cin>>c;//enter the number to print its frequency
        //fetch
        cout<<hashh[c];
    }
}*/
//#hashmap
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     //iteration
//     for(auto it : mpp){// it is pair 
//         cout<<it.first <<"->" <<it.second<<endl;   
//     }    
// }
//#unordered map
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout<<"hii";
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     //precompute
//     unordered_map<int,int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     //iteration
//     for(auto it : mpp){// it is pair 
//         cout<<it.first <<"->" <<it.second<<endl;   
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"github repo commit";
}