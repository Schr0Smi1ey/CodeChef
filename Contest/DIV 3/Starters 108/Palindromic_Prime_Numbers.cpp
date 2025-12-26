#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    if(n <= 4){
        cout << 0 << " " << n << endl;
    }
    else{
        cout << 1 << " " << n-1 << endl; // even digits only palindrome is 11
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