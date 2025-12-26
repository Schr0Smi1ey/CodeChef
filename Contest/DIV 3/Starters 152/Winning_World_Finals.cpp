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
    int m, p;
    cin >> m >> p;
    int cnt = 0;
    while (m < 300) {
        if(m == 299) {
            cout << cnt << endl;
            return;
        }
        if(p + m + 1 + 20 > 1000) {
            break;
        }
        p += 20;
        m++;
        cnt++;
    }
    cout << cnt << endl;
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
