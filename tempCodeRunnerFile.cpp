#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums(4);
    nums={1,2,3,4};
    vector<int> ans(4,0);
    int n=nums.size();
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]+nums[i-1];
    }
    int right=0;
    for(int i=n-1;i>=0;i++){
        ans[i]=ans[i]+right;
        right+=nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"hi";
}