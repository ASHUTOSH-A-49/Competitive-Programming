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
    int ind01 = -1,ind02 = -1,ind2 = -1,ind50 = -1,ind5 = -1,ind7 = -1;
    int digits = 0;
    long long k = n;
    // for 00

    while(k>0){
        digits++;
        int dig = k%10;
        k/=10;
        if(dig==0 && ind01==-1) ind01 = digits;
        else if(dig==0 && ind01!=-1 && ind02==-1) ind02 = digits;
    }
    int ans = digits;
    int ans1 = digits;
    if(ind02>ind01) ans1 = ind01-1 + ind02-ind01-1; //== ind02-2
    ans = min(ans,ans1);

    // for 25
    digits = 0;k = n;
    while(k>0){
        digits++;
        int dig = k%10;
        k/=10;
        if(dig==5 && ind5==-1) ind5 = digits;
        else if(dig==2 && ind5!=-1 && ind2==-1) ind2 = digits;
    }
    int ans2 = digits;
    if(ind2>ind5) ans2 = ind2-2; //== ind2-2
    ans = min(ans,ans2);


    // for 50
    ind01 = -1;ind5 = -1;
    digits = 0;k = n;
    while(k>0){
        digits++;
        int dig = k%10;
        k/=10;
        if(dig==0 && ind01==-1) ind01 = digits;
        else if(dig==5 && ind01!=-1 && ind5==-1) ind5 = digits;
    }
    int ans3 = digits;
    if(ind5>ind01) ans3 = ind5-2; //== ind5-2
    ans = min(ans,ans3);


    // for 75
    ind5 = -1;
    digits = 0;k = n;
    while(k>0){
        digits++;
        int dig = k%10;
        k/=10;
        if(dig==5 && ind5==-1) ind5 = digits;
        else if(dig==7 && ind5!=-1 && ind7==-1) ind7 = digits;
    }
    int ans4 = digits;
    if(ind7>ind5) ans4 = ind7-2; //== ind7-2
    ans = min(ans,ans4);
    cout<<ans<<endl;
    
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
