#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n,k;cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0,j = 0 , odd = 0,cnt= 0;
    while(i < n){
        if(arr[i]&1){
            odd++;
        }
        if(i >= k-1){
            if(odd) cnt++;
            if(arr[j++]&1)
            odd--;
        }
        i++;
    }
    cout << cnt << endl;
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