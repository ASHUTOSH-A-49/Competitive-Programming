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
    long long x0, n;
    cin >> x0 >> n;
    
    long long d = 0;
    long long rem = n % 4;
    
    if (rem == 0) {
        d = 0;
    } else if (rem == 1) {
        d = -n;
    } else if (rem == 2) {
        d = 1;
    } else if (rem == 3) {
        d = n + 1;
    }
    
    if (abs(x0) % 2 == 0) {
        cout << x0 + d << endl;
    } else {
        cout << x0 - d << endl;
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
