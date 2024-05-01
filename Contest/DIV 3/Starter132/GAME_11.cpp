#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n,m;cin >> n >> m;
    int a[n],b[m];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < m;i++){
        cin >> b[i];
    }
    if(n < 4 || m < 4 || (n + m) < 11){
        cout << -1 << endl;
        return;
    }
    sort(a,a+n,greater<int>());
    sort(b,b+m,greater<int>());
    int sum = 0;
    for(int i = 0;i < 4;i++){
        sum += (a[i] + b[i]);
    }
    int i = 4,j = 4,cnt = 8;
    while(i < n && j < m){
        if(a[i] > b[j]){
            sum += a[i];
            i++;
        }
        else{
            sum += b[j];
            j++;
        }
        cnt++;
    }
    while(cnt < 11 && i < n){
        sum += a[i];
        i++;
        cnt++;
    }
    while(cnt < 11 && j < m){
        sum += b[j];
        j++;
        cnt++;
    }
    cout << sum << endl;
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