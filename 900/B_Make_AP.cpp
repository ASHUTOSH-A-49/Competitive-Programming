#include <bits/stdc++.h>
#include <numeric>
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
    int a,b,c;cin>>a>>b>>c;
    if((a+c)%2==0){
        int newb = (a+c)/2;
        if(newb%b==0) cout<<"YES"<<endl;
        else{
        int newa = 2*b-c;
        int newc = 2*b-a;
        if((newa>0) && newa%a==0) cout<<"YES"<<endl;
        else if((newc>0) && newc%c==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }else{
        int newa = 2*b-c;
        int newc = 2*b-a;
        if((newa>0) && newa%a==0) cout<<"YES"<<endl;
        else if((newc>0) && newc%c==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
