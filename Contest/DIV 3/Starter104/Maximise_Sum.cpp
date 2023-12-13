// Upsolved 
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int pref[n],suff[n];
    pref[0] = arr[0];
    for(int i=1;i<n;i++){
        pref[i] = max(pref[i-1],arr[i]);
    }
    suff[n-1] = arr[n-1];
    for(int i = n-2;i>=0;i--){
        suff[i] = max(suff[i+1],arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += min(pref[i],suff[i]);
    }
    cout << sum << endl;
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