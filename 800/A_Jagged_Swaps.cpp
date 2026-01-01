#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums;
        for(int i = 0;i<n;i++){
            int d;cin>>d;
            nums.push_back(d);
        }

        if(nums.at(0)==1){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
}