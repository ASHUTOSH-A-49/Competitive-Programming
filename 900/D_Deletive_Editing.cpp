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
    string s,t;
    cin>>s>>t;
    vector<int> freqt(26,0);
    vector<int> freqs(26,0);

    for(int i = 0;i<s.size();i++) freqs[s[i]-'A']++;
    for(int i = 0;i<t.size();i++) freqt[t[i]-'A']++;

    // for(int i = 0;i<26;i++){
    //     if(freqt[i]>freqs[i]) cout<<"NO"<<endl;
    // }

    for(int i = s.size()-1;i>=0;i--){
        if(freqt[s[i]-'A']>0) freqt[s[i]-'A']--;
        else s[i] = '.';
    }
    string newstr = "";
    for(int i = 0;i<s.size();i++){
        if(s[i]!='.') newstr+=s[i];
    }
    // //cout<<newstr<<endl;
    if(newstr==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
