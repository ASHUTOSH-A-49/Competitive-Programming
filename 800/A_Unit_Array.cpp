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
    int cntneg = 0, cntpos = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x == -1) cntneg++;
        else cntpos++;
    }

    int ans = 0;
    if (cntneg > n / 2) {
        int needed = cntneg - (n / 2);
        ans += needed;
        cntneg -= needed;
    }
    if (cntneg % 2 != 0) {
        ans += 1;
    }

    cout << ans << endl;
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
