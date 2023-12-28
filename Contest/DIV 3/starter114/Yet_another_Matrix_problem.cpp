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

void solution(){
    int n;cin >> n;
    if(n % 2 == 0){
        if(n == 2) {
            cout << -1 << endl;
            return;
        }
    }
    int arr[n][n] ;
    fill_n((int*)arr,n*n,0);
    int num = 1;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = num++;
        }
    }
    if(n&1){
        for(int i = 1;i<n;i+= 2){
            swap(arr[i][i],arr[i][i+1]);
        }
    }
    else{
        swap(arr[0][2],arr[1][1]);
    }
    for(int i = 0 ;i<n;i++){
        for(int j = 0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
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