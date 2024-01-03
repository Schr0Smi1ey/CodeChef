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
vector<int> ans1,ans2;
bool check(int arr[],int brr[],int n,int target){
    ans1.resize(n,0);ans2.resize(n,0);
    vector<bool> b(n,false);
    for(int i=0;i<n;i++){
        ans1[i] = arr[i];
        int need = abs(target - arr[i]);
        bool flag = true;
        for(int j=0;j<n;j++){
            if(brr[j] == need && b[j] == false){
                b[j] = true;flag = false;
                ans2[i] = brr[j];
                break;
            }
        }
        if(flag) return false;
    }
    return true;
}
void solution() {
    int n;cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a,a+n);sort(b,b+n);
    int l = a[0] + b[0],r = a[n-1] + b[n-1];
    for(int i = l;i <= r;i++){
        if(check(a,b,n,i)){
            for(int i=0;i<n;i++){
                cout << ans1[i] << " ";
            }
            cout << endl;
            for(int i=0;i<n;i++){
                cout << ans2[i] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
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
