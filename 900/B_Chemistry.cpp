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
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(char c:s){
        int ind = c-'a';
        freq[ind]++;
    }
    int oddcnt = 0;
    for(int i = 0;i<26;i++){
        if(freq[i]%2!=0) oddcnt++;
    }
    if(k>=oddcnt-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
