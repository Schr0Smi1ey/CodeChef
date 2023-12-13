#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
int PrimeFactor(int n) {
    int factor = -1;
    while (n % 2 == 0) {
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factor = i;
            n /= i;
        }
    }
    if (n > 1) {
        factor = n;
    }
    return factor;
}
void solution(){
    int n;cin >> n;
    int flag = n/PrimeFactor(n);
    if(n == -1){
        cout << "Bob" << endl;
    }
    else{
        if(flag&1)
        cout << "Alice" << endl;
        else{
            cout << "Bob" << endl;
        }
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
}

// Optimize for value constraints : 
1≤T≤105 --- > test case
1≤N≤109