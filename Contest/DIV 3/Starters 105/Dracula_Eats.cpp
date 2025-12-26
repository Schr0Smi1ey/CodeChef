#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int cnt = (n > 1)?1:0; 
        int x = 2;
        while(x <= n){
            // cout << x << " " << cnt << endl;
            x += 7;
            if(x > n)break;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}