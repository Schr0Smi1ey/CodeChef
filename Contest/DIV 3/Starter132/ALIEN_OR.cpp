#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,k;cin >> n >> k;
    vector<string> v(n);
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
    bool flag = true;
    for(int i = 0;i < k;i++){
        bool temp = true;
        for(int j = 0;j < n;j++){
            temp = true;
            int cnt = 0;
            for(int p = 0;p < k;p++){
                if(v[j][p] == '1'){
                    cnt++;
                    if(p != i){
                        temp = false;
                    }
                }
            }
            if(cnt == 0) temp = false;
            if(temp){;
                break;
            }
        }
        flag &= temp;
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
