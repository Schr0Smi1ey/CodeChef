#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string a,b;cin >> a >> b;
    int x = 0, y = 0;
    for(int i=0;i<n;i++){
        if(a[i] == b[i]) continue;
        if(a[i] == 'R'){
            if(b[i] == 'S'){x++;}
            else{y++;}
        }
        if(a[i] == 'S'){
            if(b[i] == 'R'){y++;}
            else{x++;}
        }
        if(a[i] == 'P'){
            if(b[i] == 'R') {x++;}
            else{y++;}
        }
    }
    // cout << x << " " << y << endl;
    if(x > y){
        cout << 0 << endl;
        return;
    }
    if(x == y){
        cout << 1 << endl;
    }
    else{
        cout << ((y-x)/2) + 1 << endl;
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