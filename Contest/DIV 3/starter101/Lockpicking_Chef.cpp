#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    string str,lock;cin >> str >> lock;
    int sum = INT_MAX;
    for(int i=0;i<=n-k;i++){
        int temp = 0;
        for(int j=0;j<k;j++){
            int x = str[i+j]-'0';
            int y = lock[j] - '0';
            temp += min(abs(x - y), min(x, 10 - x) + min(y, 10 - y));
        }
        sum = min(sum,temp);
    }
    cout << sum << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}