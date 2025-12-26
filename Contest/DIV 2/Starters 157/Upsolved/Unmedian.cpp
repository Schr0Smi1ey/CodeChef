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
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<pair<int, int>> v;
    bool flag = false;
    while(arr.size() >= 2) {
        if(is_sorted(arr.begin(), arr.end())) {
            flag = true;
            break;
        }
        v.push_back({1, 3});
        int temp[3] = {arr[0], arr[1], arr[2]};
        sort(temp, temp + 3);
        int index = -1;
        if(temp[1] == arr[0])
            index = 0;
        else if (temp[1] == arr[1])
            index = 1;
        else if (temp[1] == arr[2])
            index = 2;
        arr.erase(arr.begin() + index);
    }
    if(!flag) {
        cout << -1 << endl;
    }
    else {
        cout << v.size() << endl;
        for(auto x : v) {
            cout << x.first << " " << x.second << endl;
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
