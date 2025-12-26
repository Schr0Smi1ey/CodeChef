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
    string str;cin >> str;
    int maxima = 1;
    for(int i=1;i<n;i++){
        int k = 1;char c = str[i];
        while(i < n && str[i] == str[i-1]){
            k++;if(i + 1 < n && str[i+1] == str[i]){
                i++;
            }
            else break;
        }
        maxima = max(maxima,k);
    }
    cout << maxima << " ";
    int last = 1,j = n-2;
    while(j >= 0 && str[j] == str[j+1]){
        last++;
        if(str[j-1] == str[j]){
            j--;
        }
        else break;  
    }
    while(k--){
        char c;cin >> c;
        if(c == str.back()){
            last++;
            maxima = max(maxima,last);
        }
        else{
            last = 1;
        }
        str += c;
        cout << maxima << " ";
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
