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

void solution1(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int sum = 0,x = (n + 1)/2,i = 0;
    while(x--){
        sum += arr[i++];
    }
    if(n % 2 == 0){
        sum -= (arr[0]);
        sum += arr[i];
    }
    cout << sum << endl;
}
void solution2(){
    int n;cin >> n;
    int arr[n],suffix[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    suffix[n-1] = arr[n-1];
    for(int i = n-2;i >= 0;i--){
        suffix[i] = suffix[i+1] + arr[i];
    }
    int ans = 0;
    for(int i = n-1 ;i >= 0;i--){
        int remained = n - i;
        int minus = (remained / 2);
        int total = suffix[i];
        if(minus) total -= suffix[n-minus];
        ans = max(ans,total);
    }
    cout << ans << endl;
}
int32_t main(){
    #ifndef KARIM
    fastio;
    #endif
    int t = 1,s;
    cin >> t >> s;
    while(t--){
        if(!s)
        solution1();
        else
        solution2();
    }
    return 0;
}