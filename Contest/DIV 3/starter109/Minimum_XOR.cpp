#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution(){
    int n;cin >> n;
    int arr[n];
    int xr = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        xr ^= arr[i];
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int temp = xr^arr[i];
        ans = min(ans,temp);
    }
    ans = min(ans,xr);
    cout << ans << endl;
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