#include <bits/stdc++.h>
#include<algorithm>
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
    for(int i = 0;i<n;i++)cin>>a[i];
    vi hash(n+1,0);
    for(int i = 1;i<n+1;i++){
        int diff = abs(a[i-1]-i);
        hash[a[i-1]] = diff;
    }
int g = 0;
for(int i = 1; i <= n; i++) {
    int diff = abs(a[i-1] - i);
    g = __gcd(g, diff);
}
cout << g << endl;
    // cout<<ans<<endl;
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
