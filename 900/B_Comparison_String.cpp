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
    string s;
    cin>>s;
    int up = 1,down = 1,score = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='<'){
            score = max(score,down);
            up++;
            down = 1;
        }else{
            score = max(score,up);
            down++;
            up = 1;
        }
        score = max(score,up);
        score = max(score,down);
        
    }
    cout<<score<<endl;
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
