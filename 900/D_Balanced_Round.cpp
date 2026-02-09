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
    int n, k;
    if (!(cin >> n >> k)) return;
    
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if (n <= 1) {
        cout << 0 << endl;
        return;
    }

    sort(a.begin(), a.end());

    int maxconsec = 1;
    int consec = 1;

    for(int i = 0; i < n - 1; i++) {
        if (a[i+1] - a[i] <= k) {
            consec++;
        } else {
            maxconsec = max(maxconsec, consec);
            consec = 1;
        }
    }
    maxconsec = max(maxconsec, consec);
    cout << n - maxconsec << endl;
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
