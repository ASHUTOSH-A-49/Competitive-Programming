#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> stops;
        stops.push_back(0);
        for(int i = 0;i<n;i++){
            int d;cin>>d;
            stops.push_back(d);
        }
        stops.push_back(x);

        vector<int> distarr;
        for(int i=  0;i<n+1;i++){
            int dist;
            if(i<n){
               dist = stops.at(i+1)-stops.at(i);
                
            }else{
                dist = 2*(stops.at(i+1)-stops.at(i));
            }
            distarr.push_back(dist); 
            
        }
        int maxdist = 0;
        for(int i = 0;i<distarr.size();i++){
            maxdist = max(maxdist,distarr.at(i));
        }

        cout<<maxdist<<endl;
    }
}