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
    int n,q;
    cin>>n>>q;
    vi a(n);
    vi pre(n);
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        pre[i] = sum;
    }
    while(q>0){
        int l,r,k;cin>>l>>r>>k;
        int sumseg;
        if(l>=2){
            sumseg = pre[r-1]-pre[l-2];
        }else{
            sumseg = pre[r-1];
        }
        
        int newsumseg = k*(r-l+1);
        if((pre[n-1]-sumseg + newsumseg)%2==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        q--;
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
