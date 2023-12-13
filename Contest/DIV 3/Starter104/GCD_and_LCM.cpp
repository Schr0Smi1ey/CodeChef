#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int a,b,k;cin >> a >> b >> k;
    int mn = min(a,b);
    int mx = max(a,b);
    while(k--){
        int gcda = __gcd(mx,mn);
        mx = gcda;
        if(mn > mx){
            swap(mn,mx);
        }
        int lcma = (mn*mx)/__gcd(mn,mx);
        mx = lcma;
        if(mn == mx) break;
    }
    cout << mn + mx << endl;
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