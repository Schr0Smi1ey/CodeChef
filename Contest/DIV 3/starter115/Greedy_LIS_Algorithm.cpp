#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
        tree_order_statistics_node_update>;
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,x;cin >> n >> x;
    int lim = abs(1 - (n-1));
    if(x > lim || (n == 1 && x == 1)){
        cout << -1 << endl;
        return;
    }
    vector<int> first,se;bool flag = false;
    int p = n,q = n,i;
    for(i = 0;i <= n;i++){
        if(q - p == x){
            break;
        }
        if(i)
        {first.push_back(i);}
        else
        {flag = true;p = 1;q = n-1;continue;}
        p++;
    }
    if(flag) first.push_back(n);
    int l = (first.size())?1:0;
    for(int j = max(1LL,i);j <= (n-l);j++){
        first.push_back(j);
    }
    if(first.size() > n){
        cout << -1 << endl;return;
    }
    for(auto x : first){
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    #ifndef KARIM
    // fastio;
    #endif
    int t = 1;
        cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
