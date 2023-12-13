#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define INF INT_MAX
void solution()
{
    int n;cin >> n;
    string str;cin >> str;
    int indx = (int)(find(str.begin(),str.end(),'1') - str.begin());
    if(indx <= n-3)
    {
        for(int i=indx + 1 ;i<n;i++)
        str[i] = '0';
    }
    cout << str << endl;
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