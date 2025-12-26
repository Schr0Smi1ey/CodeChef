// Upsolved
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    int n;cin >> n;
    string str;cin >> str;
    vector<int> a,b,c;
    for(int i = 0;i < n;i++){
        if(str[i] == 'a')
            a.push_back(i);
        else if(str[i] == 'b')
            b.push_back(i);
        else
            c.push_back(i);
    }
    int aa = 0,bb = 0,cc = 0,cnt = 0;
    while(aa < a.size() && bb < b.size() && cc < c.size()){
        if(a[aa] < b[bb] && b[bb] < c[cc]){
            cnt++;
            aa++;
            cc++;
        }
        else if(a[aa] > b[bb]){
            bb++;
        }
        else if(b[bb] > c[cc]){
            cc++;
        }
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
