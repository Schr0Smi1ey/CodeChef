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
const int N = 2e5 +5;
typedef pair<int,int> pii;
void solution(){
    int n,x;cin >> n >> x;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1] = i;
    }
    if((n&1) && x == (n+1)/2){
        cout << -1 << endl;return;
    }
    swap(arr[0],arr[x-1]);
    if(x != 1 && x != n)
    swap(arr[n-1],arr[n-x]);
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
}

int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}