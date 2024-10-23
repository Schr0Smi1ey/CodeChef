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
    int arr[n + 1], maxima = MINF;
    for(int i = 0; i <= n; i++) {
        cin >> arr[i];
        maxima = max(maxima, arr[i]);
    }
    while(true) {
        int x = -1, index = -1;
        for (int i = 0; i < n; i++) {
            if(arr[i] <= (2 * arr[n]) && arr[i] > x) {
                x = arr[i];
                index = i;
            }
        }
        if(x == -1 || arr[n] == maxima)
            break;
        if(arr[index] > arr[n])
            swap(arr[n], arr[index]);
        else {
            break;
        }
        if(arr[n] == maxima)
            break;
    }
    cout << accumulate(arr, arr + n, 0) << endl;
}

int32_t main() {
    // fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
