#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    double l,a,b;cin >> l >> a >> b;
    double c = l/a;
    double d = l/b;
    int x,y;
    if(c - (int)c > 0)
    x = (int)c + 1;
    else x = (int)c;
    if(d - (int)d > 0)
    y = (int)d + 1;
    else y = (int)d;
    if(y == x){
        cout << -1 << endl;
        return ;
    }
    if(x - y > 0){
        cout << x- y -1<< endl;
    }
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