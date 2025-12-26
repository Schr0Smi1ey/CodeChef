#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 +5;

void solution(){
    int n;cin >> n;
    // stack<int> stk;
    // int ans = 0;
    // for(int i=0;i<n;i++){
    //     int x;cin >> x;
    //     if(stk.empty() || (!stk.empty() && stk.top() == 1 && x  == 1)){
    //         stk.push(x);
    //     }
    //     else{
    //         ans++;
    //         stk.pop();
    //     }
    // }
    // cout << ans << endl;
    int zero = 0,one = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        if(x) one++;
        else zero++;
    }
    cout << min(zero,one) << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}