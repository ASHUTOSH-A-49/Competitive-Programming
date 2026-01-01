#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<long long> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        int checkuniq = 0;
        for(int i = 0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                checkuniq = 1;
                break;
            }
        }
        if(!checkuniq){
            cout<<-1<<endl;
        }else{
            vector<int> b;
            vector<int> c;
            sort(a.begin(),a.end());
            int checkdupl = 1;
            int siz = n-1;
            while(checkdupl){
                if(a[siz]==a[siz-1]){
                    c.push_back(a[siz]);
                    siz--;
                }else{
                    c.push_back(a[siz]);
                    checkdupl = 0;
                    siz--;
                }
            }
            for(int i = 0;i<=siz;i++){
                b.push_back(a[i]);
            }

            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i:b) cout<<i<<" ";
            cout<<endl;
            for(int i:c) cout<<i<<" ";
            cout<<endl;


        }
    }
}