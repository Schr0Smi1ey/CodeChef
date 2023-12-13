#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    int arr[n],sum = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int x = (sum/n);
    if(x == 0){
        cout << "NO" << endl;
        return;
    }
    for(int i=0;i<n;i++){
        arr[i] = x;
        sum -= x;
    }
    for(int i=0;i<n;i++){
        if(sum == 0){
            break;
        }
        arr[i] += 1;
        sum--;
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(abs(arr[i] - arr[i-1]) > k){
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
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