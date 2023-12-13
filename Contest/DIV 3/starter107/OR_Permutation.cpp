#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1] = i;
    }
    for(int i=2;i<n;i++){
        if(arr[i] == (arr[i-1] | arr[i-2])){
            swap(arr[i],arr[i-2]);
        }
    }
    for(auto x : arr){
        cout << x << " ";
    }
    cout << endl;
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