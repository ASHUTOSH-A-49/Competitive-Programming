#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countdot = 0;
        int counthash = 0;
        int consecdot = 0;
        bool checkconsecdot = false;
        for(int i = 0;i<s.size();i++){
            if(s.at(i)=='.'){
                countdot++;
                consecdot++;
                if(consecdot==3){
                    checkconsecdot = true;
                }
            }else{
                consecdot = 0;
            }
        }
        if(checkconsecdot){
            cout<<2<<endl;
        }else{
            cout<<countdot<<endl;
        }
        
    }
}