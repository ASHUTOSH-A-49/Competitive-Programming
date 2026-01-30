#include <bits/stdc++.h>
#include <numeric>

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
    for(int i = 0;i<n;i++) cin>>a[i];
    bool found = false;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(__gcd(a[i],a[j])<=2) {
            found = true;
            break;
        }
        }
        
    }
    if(found) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
