#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,k;cin>>n;
    string s,t,u;
    cin>>s>>t>>u;
    for(int i=0;i<u.size();i++)
    {
        cout<<(char)('a'+((t[i]-s[i]+26+u[i]-'a')%26));
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}