// // // // // // // // // // void print(int n){
// // // // // // // // // //     if(n==0) return;
// // // // // // // // // //     cout<<n<<endl;
// // // // // // // // // //     print(n-1);
// // // // // // // // // //     cout<<n<<endl;



// // // // // // // // // // }
// // // // // // // // // // int main(){
// // // // // // // // // //     int n;
// // // // // // // // // //     cin>>n;
// // // // // // // // // //     print(n);
// // // // // // // // // #include<iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // void sum1ton(int x,int sum){
// // // // // // // // //     if(x==0){ 
// // // // // // // // //     cout<<sum;
// // // // // // // // //     return;
// // // // // // // // // }
// // // // // // // // //     sum1ton(x-1,sum+x);
// // // // // // // // // }
// // // // // // // // // int main(){
// // // // // // // // //     int n;
// // // // // // // // //     cout<<"hii"<<endl;
// // // // // // // // //     cin>>n;
// // // // // // // // //     sum1ton(n,0);
// // // // // // // // //     return 0;
// // // // // // // // // }
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // //  int sum(int x){
// // // // // // // //     if(x==1) return 1;
// // // // // // // //     int recsum=x+sum(x-1);
// // // // // // // //     return recsum;
// // // // // // // // }
// // // // // // // // int main(){
// // // // // // // //     int n;
// // // // // // // //     cout<<"hii"<<endl;
// // // // // // // //     cin>>n;
// // // // // // // //     cout<<sum(n);
// // // // // // // // }
// // // // // // // #include<iostream>
// // // // // // // using namespace std;
// // // // // // // int fact(int x){
// // // // // // //     if(x==1 || x==0)
// // // // // // //     return 1;
// // // // // // //     int fa= x *fact(x-1);
// // // // // // //     return fa;
// // // // // // // }
// // // // // // // int main(){
// // // // // // //     int n;
// // // // // // //     cout<<"hii";
// // // // // // //     cin>>n;
// // // // // // //     cout<<fact(n);
// // // // // // // }
// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int power(int a,int b){
// // // // // //     if(b==0) return 1;
// // // // // //     return a*power(a,b-1);
// // // // // // }
// // // // // // int main(){
// // // // // //     int a;
// // // // // //     cin>>a;
// // // // // //     int b;
// // // // // //     cin>>b;
// // // // // //     cout<<power(a,b);
// // // // // // }
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int fibo(int x){
// // // // //     if(x==0) return 0;
// // // // //     else if(x==1 || x==2) return 1;
// // // // //     return fibo(x-1)+fibo(x-2);
// // // // // }
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     cout<<fibo(n);
// // // // // }
// // // // #include<iostream>
// // // // using namespace std;
// // // // int pl(int x,int y){
// // // //     if(y==0) return 1;
// // // //     else if(y==1) return x;
// // // //     int p=pl(x,y/2);
// // // //     if(y%2==0){
// // // //         return p*p;  
// // // //     }
// // // //     else 
// // // //     return p*p*x;
// // // // }
// // // // int main(){
// // // //     int a;
// // // //     cin>>a;
// // // //     int b;
// // // //     cin>>b;
// // // //     cout<<pl(a,b);
// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int x;
// // //     cin>>x;
// // //         if(x<0 || (x%10==0 && x!=0)){return false;}
// // //     int temp=x;
// // //     int r=0;
// // //     while(x>0){
// // //         int ld=x%10;
// // //         r=r*10;
// // //         r+=ld;
// // //         x/=10;
// // //     }
// // //     if(temp==r) return true;
// // //     else 
// // //     return false
// // //     if(1) cout<<"hii";
// // //     else if(0) cout<<"hello";
// // //     }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a=11;
// //     int b=1;
// //     cout<<a&b;
// // }
// #include<iostream>
// using namespace std;
// int main(){
// int num[5];
// for(int i=0;i<5;i++){
//     num[i]=3;
// }
// for(int i=0;i<5;i++){
//     cout<<num[i]<<endl;
// }
// }
// #include<iostream>
// using namespace std;
// void change(int x[]){
//     cout<<x[2]<<endl;
//     x[2]=6;
// }
// int main(){
//   int num[]={5,2,3,4,5};
//   int l=sizeof(num)/4;
//   change(num);
//   cout<<num[2];
// }
// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={1,2,3,4,5};
// for(int i=0;i<5;i++){
//   cout<<arr[i]<<e;
// }
// int j=0;
// int k=j+1;
// while(k<5){
//   int temp=arr[j];
//   arr[j]=arr[k];
//   arr[k]=temp;  
//   j=j+2;
//   k=j+1;
// }
// for(int i=0;i<5;i++){
//   cout<<arr[i];
// }
// }
// #include<stdio.h>
// int main(){
//   int arr[3][2]={1,2,3,4,5,6};
//   int brr[2][3]={1,3,5,2,4,2};
//   int crr[3][3];
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       crr[i][j]=0;
//       for(int k=0;k<3;k++){
//         crr[i][j]+=arr[i][k]*brr[k][j];
//       }
//     }
//   }
//   printf("the multiplication of arr & brr is \n:")
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       printf("%d",crr[i][j])
//     }
//     printf("\n")
//   }
//   return 0;
// }
// #include <stdio.h>
// int main() {
//     int arr[3][2] = {1, 2, 3, 4, 5, 6};
//     int brr[2][3] = {1, 3, 5, 2, 4, 2};
//     int crr[3][3];

//     // Matrix multiplication: of array arr and brr
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             crr[i][j] = 0;
//             for (int k = 0; k < 2; k++) {  
//                 crr[i][j] += arr[i][k] * brr[k][j];
//             }
//         }
//     }
    
//     printf("The multiplication of arr & brr is:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", crr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int num = 10;
//     float price = 99.9f;
//     char grade = 'A';
//     string name = "C++";
//     cout << name << " -> Num: " << num 
//          << ", Price: " << price 
//          << ", Grade: " << grade << endl;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     int age;
//     cout <<"Enter your name:";
//     cin >> name;
//     cout <<"Enter your age:";
//     cin >>age;
//     cout <<"Hello"<<name<<"! You are"
//     <<age<<"years old."<<endl;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 5; i++) {
//         cout << "Number: " << i << endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main() {
//     int day = 3;
//     switch (day) {
//         case 1: cout << "Monday"; break;
//         case 2: cout << "Tuesday"; break;
//         case 3: cout << "Wednesday"; break;
//         case 4: cout << "Thursday"; break;
//         case 5: cout << "Friday"; break;
//         default: cout << "Weekend";
//     }
// }
// int add(int a, int b) {
//     return a + b;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int result = add(5, 10);
//     cout << "Sum = " << result << endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<i<<endl;
//     }
//     cout<<"Hello C++"<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int i=0,j=0,temp;
// int m=5;
// int n=2;
// int nums1[]={1,2,3,0,0,0};
// int nums2[]={2,5,6};
//         while(i<m && j<n){
//             if(nums1[i]==0){ 
//                 nums1[i] = nums2[j];
//                 i++;
//                 j++;
//              }
//             else if(nums1[i]<nums2[j]){
//                 //nums1[i]=nums1[i];
//                 i++;
//             }
//             else                     
//              temp= nums1[i];
//                 nums1[i] = nums2[j];
//                 nums2[j] = temp;
//                 i++;
//                  j++;
//         }
//         while (j < n) {
//             nums1[i] = nums2[j];
//             i++;
//             j++; }
//             for(int w=0;w<m;w++){
//                 cout<<nums1[w];
//             }
//             return 0;
//         }




















