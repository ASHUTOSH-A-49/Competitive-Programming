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
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    int temp = a[1];
    a[1] = a[n-1];
    a[n-1] = temp;
    int uniq = 0;
    for(int i = 0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            uniq = 1;
            break;
        }
    }
    if(uniq){
        cout<<"YES"<<endl;
        for(int i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
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
