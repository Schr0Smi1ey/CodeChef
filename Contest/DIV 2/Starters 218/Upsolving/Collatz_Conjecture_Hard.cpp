#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
//#include "debug_template.hpp" 
#else
#define debug(...)
#define debugArr(arr, N)
#define trace(x)
#endif
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n; cin >> n;
    if(n == 1) {
        cout << 0 << endl;
    }
    else if((n == 3) || (n == 2)) {
        cout << 1 << endl;
    }
    else if((n == 6) ) {
        cout << 2 << endl;
    }
    else if(n % 4 == 0) {
        int cnt = 0;
        while(true) {
            if(n == 1) {
                break;
            }
            long long x = n / 2;
            cout << "n " << n << endl;
            cout << "x " << x << endl << endl;
            if((x % 4) == 0) {
                n /= 2;
                cnt++;
            }
            else if(x == 2) {
                cnt += 2; break;
            }
            else if(x == 6) {
                cnt += 3;
                break;
            }
            else {
                n = (n ^ 3) + 1;
                cnt++;
            } 
        }
        cout << cnt << endl;
    }
    else  {
        cout << -1 << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solution();
    return 0;
}