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

int CeilExp(double target, double base) {
    if (target <= 1) return 0;
    double Exp = log(target) / std::log(base);
    return static_cast<int>(ceil(Exp));
}

//solve
void solve() {
    int n;cin>>n;
    vector<int> nums(n);
    for(int i = 0;i<n;i++) cin>>nums[i];
    if(n==1) cout<<0<<endl;
    else{
        sort(nums.begin(),nums.end());
        int maxfreq = 1,freq = 1;
        
        for(int i = 0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                freq++;
            }else{
                maxfreq = max(maxfreq,freq);
                freq = 1;
            }
        }
        maxfreq = max(freq,maxfreq);
        // cout<<maxfreq<<endl;
        // if(maxfreq<=2){
        //     cout<<n-maxfreq + CeilExp(double(n),double(2))<<endl;
        // }else if(maxfreq==n){
        //     cout<<0<<endl;
        // }else{
        //     cout<<n-maxfreq + CeilExp(double(n),double(maxfreq))<<endl;
        // }


        if(maxfreq==n){
            cout<<0<<endl;
        }else{
            int ans = 0;
    int curr = maxfreq;
    
    while (curr < n) {
        int remaining = n - curr;
        int adddouble = curr; 
        ans++; //clone
        
        if (remaining <= adddouble) {
            ans += remaining; // Swap remain
            curr = n;
        } else {
            ans += adddouble; // Swap all cloned elements
            curr += adddouble; 
        }
    }
    cout << ans << endl;
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
