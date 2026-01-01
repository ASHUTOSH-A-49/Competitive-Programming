#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int check = 0;
        for(int i = 0;i<n;i++){
            if(k==arr[i]){
                check = 1;
                break;
            }
        }
        if(check){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
    }
}