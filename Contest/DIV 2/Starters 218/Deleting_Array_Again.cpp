#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
// #include "debug_template.hpp" 
#else
#define debug(...)
#define debugArr(arr, N)
#define trace(x)
#endif
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n; cin >> n;
    int arr[n], cost[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    int ans = 0, x = n;
    for(int i = 0; i < n; i++) {
        int ind = min_element(cost, cost + x) - cost;
        for(int i = ind; i < x; i++) {
            ans += (arr[i] * cost[ind]);
        }
        x = ind;
        if(x <= 0)
            break;
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}