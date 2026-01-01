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
        if(n%3==0){
            cout<<"Second"<<"\n";

        }else{
            cout<<"First"<<"\n";
        }
    }
}