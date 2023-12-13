#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    string f,m;cin>>f>>m;f = f + m;
    int child;cin>>child;
    string son = "";
    while(child--)
    {
        string temp;cin>>temp;
        son+=temp;
    }
    int fre_son[30] = {0},fre_parent[30] = {0};
    for(int i=0;i<f.size();i++)
    {
        fre_parent[f[i]-'a']++;
    }
    for(int i=0;i<son.size();i++)
    {
        fre_son[son[i]-'a']++;
    }
    bool flag = true;
    for(int i=0;i<30;i++)
    {
        if(fre_son[i]>fre_parent[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}