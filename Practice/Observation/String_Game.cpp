#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution(){
    int n;cin >> n;
    string str;cin >> str;
    int one = 0,zero = 0;
    for(auto c : str){
        c == '0'?zero++:one++;
    }
    if(!(min(one,zero)&1)){
        cout << "Ramos" << endl;
    }
    else{
        cout << "Zlatan" << endl;
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