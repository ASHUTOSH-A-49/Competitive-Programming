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
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int partn = 0;
    int l = 0;

    while (l < n) {
        if (a[l] == 0) {
            l++;
            continue;
        }
        partn++;
        int r = l;
        while (r < n && a[r] != 0) {
            r++;
        }
        l = r;
    }
    if (partn == 0) cout << 0 << endl;
    else if (partn == 1) cout << 1 << endl;
    else cout << 2 << endl;
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
