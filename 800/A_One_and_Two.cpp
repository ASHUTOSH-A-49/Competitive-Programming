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
    int cnt2 = 0;
    vi a(n);
    for(int i = 0;i<n;i++){
        int d;cin>>d;
        a[i] = d;
        if(d==2) cnt2++;
    }
    if(cnt2&1) cout<<-1<<endl;
    else{
        if(cnt2==0) cout<<1<<endl;
        else{
            int j = 0;
        int i = 0;
        while(j!=cnt2/2 && i<n){
            if(a[i]==2) j++;
            i++;
        }
        cout<<i<<endl;
        }
        
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
