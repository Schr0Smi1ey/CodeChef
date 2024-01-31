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
    int n,k;cin >> n >> k;
    deque<int> arr;
    for(int i=0;i<=k;i++){
        arr.push_back(i+1);
    }
    for(int i = k + 1;i<n;i++){
        if((i+1)&1){
            arr.push_front(i+1);
        }
        else{
            if(arr.back()&1){
                arr.push_back(i+1);
                swap(arr.back(),arr[arr.size()-2]);
            }
            else{
                arr.push_back(i+1);
            }
        }
    }
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
}

int32_t main() {
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
