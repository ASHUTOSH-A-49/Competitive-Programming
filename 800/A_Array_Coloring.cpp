#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int &x:arr) cin>>x;
        int sum = 0;
        int oddcnt = 0;
        int evencnt = 0;
        for (int i = 0; i < n; ++i) {
        sum+=arr[i];
        if (arr[i] % 2 != 0) {
            oddcnt++;
        } else {
            evencnt++;
        }
    }
        if((sum)%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}