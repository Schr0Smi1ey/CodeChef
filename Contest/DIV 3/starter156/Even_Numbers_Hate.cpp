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
    vector<int> odd;
    int evenSum = 0, even = 0;
    for(int i = 0, x; i < n; i++) {
        cin >> x;
        if(x % 2 == 0) {
            evenSum += x;
            even++;
        }
        else {
            odd.push_back(x);
        }
    }
    if(odd.size() == 0) {
        cout << 0 << endl;
        return;
    }
    int ans = even + 1;
    evenSum += odd[0];
    for (int i = 1; i < odd.size(); i++) {
        evenSum += odd[i];
        ans += (evenSum % 2 == 1);
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
