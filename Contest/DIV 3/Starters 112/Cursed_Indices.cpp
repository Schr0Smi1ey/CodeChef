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
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    bool flag[n] = {false};
    flag[0] = true;
    int sum = arr[0];
    vector<int> v;v.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i] > sum){
            v.push_back(arr[i]);
            flag[i] = true;
            sum += arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(!flag[i]){
            v.push_back(arr[i]);
        }
    }
    sum = v[0];
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(sum >= v[i]){
            cnt++;
        }
        sum += v[i];
    }
    cout << cnt << endl;
    for(auto x : v){
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