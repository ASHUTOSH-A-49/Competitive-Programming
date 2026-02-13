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
    int count = 0;
    for(int i = 0;i<n;i++) cin>>a[i];
    if(n==1) cout<<0<<endl;
    else{
      for(int i = n-1;i>0;i--){
        while(a[i-1]>=a[i] && a[i-1]>0 ) {
            a[i-1]=a[i-1]/2;
            count++;
        }
    }
    int flag = true;
    for(int i = 0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            flag = false;
            break;
        }
    }

    if(flag) cout<<count<<endl;
    else cout<<-1<<endl;  
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
