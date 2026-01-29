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
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i = 0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }else{
        if(n%2==0){
            if(k>=2){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i = 0;i<n/2;i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(k>=3 && n>=3){
                cout<<"YES"<<endl;
                int times = (n-3)/2;
                cout<<times+1<<endl;
                for(int i = 0;i<times;i++){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }else cout<<"NO"<<endl;
        }
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
