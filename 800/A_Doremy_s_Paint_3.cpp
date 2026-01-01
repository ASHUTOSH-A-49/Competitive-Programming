#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
     cin.tie(NULL); //removes the sync b/w cin and cout 
     //when use fastio use (/n) more than endl 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> nums;
        map<int,int> m;
        for(int i =0;i<n;i++){
            int d;cin>>d;
            nums.push_back(d);
            m[d]++;
        }
        if(n==2){
            cout<<"Yes"<<"\n";
        }else{
            if(m.size()>2){
                cout<<"No"<<"\n";
            }else{
                if(m.size()==1){
                    cout<<"Yes"<<"\n";
                }else{
                int flag = 1;
                if(n%2==0){
                    for (auto x: m){
                        if(x.second %2 !=0){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag){
                        cout<<"Yes"<<"\n";

                    }else{
                        cout<<"No"<<"\n";
                    }
                }else{
                    vector<int> numpair;
                    for (auto x: m){
                        numpair.push_back(x.second);
                    }
                    if(abs(numpair.at(0)-numpair.at(1))==1){
                        cout<<"Yes"<<"\n";

                    }else{
                        cout<<"No"<<"\n";
                    }
                }
                }
                
            }
        }
        
        
    }
}