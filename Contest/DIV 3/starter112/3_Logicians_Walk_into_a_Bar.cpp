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
    string str;cin >> str;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(str[i] == '1'){
            if(flag){
                if(i == n-1) cout << "YES" << endl;
                else 
                cout << "IDK" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(str[i] == '0'){
            cout << "NO" << endl;
            flag = false;
        }
    }
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