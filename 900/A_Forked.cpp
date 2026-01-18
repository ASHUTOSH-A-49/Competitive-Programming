#include <bits/stdc++.h>

using namespace std;

// Types
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> si;           
typedef set<ll> sll;           
typedef multiset<int> msi;    
typedef map<int, int> mii;   
typedef map<ll, ll> mll;       
typedef map<string, int> msti;  
typedef unordered_map<int, int> umii; 
typedef unordered_set<int> usi;

//fastio
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

float dist(int x1,int y1,int x2,int y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

//solve
void solve() {
    int a,b;
    cin>>a>>b;
    int xk,yk;
    cin>>xk>>yk;
    int xq,yq;
    cin>>xq>>yq;
    int minsp = min(a,b);
    if(abs(xq-xk)-1<minsp && abs(yq-yk)<minsp){
        cout<<0<<endl;
    }else if((dist(xk,yk,xq,yq)/2)>(dist(a,b,0,0))){
        cout<<0<<endl;
    }else{
        
    }
}
//main
int main() {
    fastIO();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
