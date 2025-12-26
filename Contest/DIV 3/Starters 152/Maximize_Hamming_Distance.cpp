#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;
int maxima(int a, int b, int c) {
    int diff = abs(a - b);
    if (c >= diff) {
        a = b = max(a, b) + ((c - diff) / 2);
        c -= diff;
        if(c & 1) {
            a++;
        }
    } 
    else {
        (a < b) ? a += c: b += c;
    }
    return a * b;
}
void solution() {
    int n, m;cin >> n >> m;
    vector<string> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    vector<pair<int, pair<int, int>>> cnt(n, {0, {0, 0}});
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cnt[j].second.first += (v[i][j] == '0');
            cnt[j].second.second += (v[i][j] == '1');
            cnt[j].first += (v[i][j] == '?');
        }
    }
    int ans = 0LL;
    for (int i = 0; i < n; i++) {
        ans += maxima(cnt[i].second.first, cnt[i].second.second, cnt[i].first);
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
