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
    long long n,k,x;cin>>n>>k>>x;
    long long firstn = (n*(n+1))/2;
    long long firstk = (k*(k+1))/2;
    long long firstn_k = ((n-k)*((n-k)+1))/2;
    if(firstk>x) cout<<"NO"<<endl;
    else if(firstn-firstn_k<x) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

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
