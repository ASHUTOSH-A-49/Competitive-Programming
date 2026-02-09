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

//solve
void solve() {
    int n;cin>>n;
    vi a(n);
    int mini = INT_MAX,maxi = INT_MIN,minind = -1,maxind = -1;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    } 
    int maxans = a[n-1]-a[0];
    for(int i = 0;i<n-1;i++){
        if(i>0)
        maxans = max(maxans,a[i]-a[0]);
        if(i<n-1){
            maxans = max(a[i]-a[i+1],maxans);
            maxans = max(maxans,a[n-1]-a[i]);
        }
    }
    cout<<maxans<<endl;
    

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
