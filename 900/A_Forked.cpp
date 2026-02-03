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
    set<pair<int,int>> kset;
    set<pair<int,int>> qset;
    kset.insert({xk-a,yk-b});
    kset.insert({xk-a,yk+b});
    kset.insert({xk+a,yk-b});
    kset.insert({xk+a,yk+b});
    kset.insert({xk-b,yk-a});
    kset.insert({xk+b,yk-a});
    kset.insert({xk-b,yk+a});
    kset.insert({xk+b,yk+a});

    qset.insert({xq-a,yq-b});
    qset.insert({xq-a,yq+b});
    qset.insert({xq+a,yq-b});
    qset.insert({xq+a,yq+b});
    qset.insert({xq-b,yq-a});
    qset.insert({xq+b,yq-a});
    qset.insert({xq-b,yq+a});
    qset.insert({xq+b,yq+a});

    int cnt = 0;
    for(auto p:kset){
        if(qset.find(p)!=qset.end())cnt++;
    }
    cout<<cnt<<endl;
    
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
