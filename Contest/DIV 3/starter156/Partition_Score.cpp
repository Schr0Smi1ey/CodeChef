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
    int n, k;cin >> n >> k;
    int arr[n];
    for(int i = 0;i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    sort(arr, arr + n);
    if(k == 1) {
        cout << 2*arr[n - 1] + arr[n - 2] + arr[0] << endl;
        return;
    }
    if(k == 2) {
        cout << arr[0] + arr[n - 1] + arr[n - 2] + arr[n - 3] << endl;
    }
    else {
        cout << arr[0] + arr[n - 1] + arr[n - 2] + arr[n - k - 1] << endl;
    }
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
