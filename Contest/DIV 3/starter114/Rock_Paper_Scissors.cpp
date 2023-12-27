#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#ifdef KARIM
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 +5;
char sol(char x){
    if(x == 'S') return 'R';
    if(x == 'P') return 'S';
    if(x == 'R') return 'P';
}
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int win = (n/2) + 1;
    vector<bool> flag(n,false);
    int i = 0;
    string ans(n,'0');
    while(win && i < n){
        if(sol(str[i]) == 'P'){
            win--;
            flag[i] = true;
            ans[i] = 'P';
        }
        i++;
    }
    int j = n-1;
    while(win && j >= 0){
        if(flag[j] == true) {j--;continue;}
        flag[j] = true;
        win--;
        ans[j] = sol(str[j]);
        j--;
    }
    for(int i=0;i<n;i++){
        if(!flag[i]){
            ans[i] = 'P';
        }
    }
    cout << ans << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin >> t;
    while(t--){
        solution();
    }
    return 0;
}