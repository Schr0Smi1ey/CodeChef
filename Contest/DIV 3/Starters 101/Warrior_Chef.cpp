#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,h;cin >> n >> h;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        if(h <= a[i]){
            cout << a[i] << endl;
            return;
        }
        h-=a[i];
    }
    cout << 0 << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;while(t--){
        solution();
    }
    return 0;
}