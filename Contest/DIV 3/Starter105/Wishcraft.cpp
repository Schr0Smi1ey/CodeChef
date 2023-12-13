// Upsolved
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
void solution(){
    int n,p,q;cin >> n >> p >> q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    sort(arr,arr+n);
    int ans = arr[n-1] - arr[0];
    for(int i=1;i<n-1;i++){arr[i] = abs(arr[i]);}
    int ops = p + q;
    sort(arr+1,arr+n-1,greater<int>());
    int i = 1;
    while((ops)-- && i < n-1){
        ans += arr[i++];
    }
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