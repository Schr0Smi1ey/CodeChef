#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(n % 2 == 0){
            if(i < (n/2))
                ans += arr[i];
            else{
                ans -= arr[i];
            }
        }
        else{
            if(i <= (n/2)){
                ans += arr[i];
            }
            else{
                ans -= arr[i];
            }
        }
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
