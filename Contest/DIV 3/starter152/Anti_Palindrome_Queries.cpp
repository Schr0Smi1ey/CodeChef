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
    int n, q;
    cin >> n >> q;
    int one[n + 1] = {0}, two[n + 1] = {0}, three[n + 1] = {0};
    for (int i = 1, x;i <= n; i++) {
        cin >> x;
        one[i] += (x == 1);
        two[i] += (x == 2);
        three[i] += (x == 3);
    }
    for (int i = 1; i <= n; i++) {
        one[i] += one[i - 1];
        two[i] += two[i - 1];
        three[i] += three[i - 1];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        int m = r - l + 1;
        if ((m % 2) == 1) {
            cout << "No" << endl;
        }
        else {
            int a = one[r] - one[l - 1], b = two[r] - two[l - 1], c = three[r] - three[l - 1];
            int halfLen = (m / 2);
            if (max({a,b,c}) != halfLen) {
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
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
