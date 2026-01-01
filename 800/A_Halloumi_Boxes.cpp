#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> boxes;
        for(int i = 0;i<n;i++){
            int d;
            cin>>d;
            boxes.push_back(d);
        }
        bool isSorted = true;
        for(int i = 0;i<n-1;i++){
            if(boxes.at(i)>boxes.at(i+1)){
                isSorted = false;
                break;
            }
        }
        if(isSorted){
            cout<<"YES"<<endl;
        }else{
          if(k>=2){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }  
        }
        
        
    }
}