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
    long long n;cin>>n;
    if(n<4 || n%2!=0)cout<<-1<<endl;
    else{
        long long mini;
        // if(div6==0) mini = n/6;
        mini = (n+5)/6 ; //ceil
        long long  maxi;
        maxi = n/4;
        // else maxi = (n-6)/4 + 1;
        cout<<mini<<" "<<maxi<<endl;
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
