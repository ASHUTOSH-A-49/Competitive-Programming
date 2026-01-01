#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
    //     if (text.find(pattern) != string::npos) {
    //     cout << "Substring found" << endl;
    // }
    int check = 0;
    int op = 0;
    while(!check && x.size()<=50){
        if(x.find(s)!=string::npos){
            check = 1;
        }else{
            x = x+x;
            op++;
        }
    }
    if(check==0){
        cout<<-1<<endl;
    }else{
        cout<<op<<endl;
    }



    }
}