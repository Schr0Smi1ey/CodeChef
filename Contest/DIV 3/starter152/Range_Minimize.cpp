#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    int arr[n];
    for (int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    if(n == 3) {
        cout << 0 << endl;
        return;
    }
    sort(arr, arr + n);
    int ans = INF;
    ans = min(ans, abs(arr[n - 1] - arr[2])); // deleting both min
    ans = min(ans, abs(arr[0] - arr[n - 2 - 1])); // deleting both max
    ans = min(ans, abs(arr[n - 2] - arr[1])); // deleting current max and min
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
