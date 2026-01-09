// #include<iostream>
// using namespace std;
// int main(){
//     int i=4;
//     int& j=i;
// }
// #include<iostream>
// using namespace std;
// int update(int& j){
//     j++;
// }
// int main(){
//     int n=6;
//     cout<<"before update"<<n<<endl;
//     update(n);
//      cout<<"after update"<<n;
//      return 0;
// }
// #include<iostream>
// using namespace std;
// int& fun(int m){
//     int num=m;
//     int& ans=num;
//     return ans;
// }
// int main(){
//     int a=8;
//     fun(a);
// }
//DMA
// #include<iostream>
// using namespace std;
// int getsum(int *arr,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     int* arr= new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int result=getsum(arr,n);
//     cout<<result;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int* p = new int(10); //(int* p = new int; *p = 10;) // dynamically allocate single int
//     char* c = new char('A'); // dynamically allocate single char

//     delete p;   // delete single int
//     delete c;   // delete single char

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int* arr = new int[5];   // dynamically allocate array of ints
//     char* str = new char[10]; // dynamically allocate array of chars

//     delete[] arr;   // delete int array
//     delete[] str;   // delete char array

//     return 0;
// }
//DMA -2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     int col;
//     cin>>col;   
//     //creating 2D array
//     int **arr=new int*[row];
//     for(int i=0;i<row;i++){
//         arr[i]=new int[col];
//     }
//     //taking input
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //taking output
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<"";
//         }
//         cout<<endl;
//     }
//     //releasing memory
//     for(int i=0;i<row;i++){
//         delete[] arr[i]; //first need to delete column
//     }
//     delete[] arr;// then we delete row
// }
#include<iostream>
using namespace std;
int main(){
int x = 10;
void *ptr = &x;

int *iptr = (int *)ptr;   // typecasting
printf("%d", *iptr);     //  output: 10
}
// jagged array H.W
