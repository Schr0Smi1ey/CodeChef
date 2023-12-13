#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int x,h;cin >> x >> h;
    int k = 1;
    while(true)
    {
        if(k<=5)
        h-=x/2;
        else
        h -= x;
        if(h <=0 )
        break;
        k++;
    }
    cout << k << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}