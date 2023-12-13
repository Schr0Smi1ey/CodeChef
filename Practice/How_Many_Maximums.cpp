#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count = 0;
    if(str[0]=='1')
    count++;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            count++;
            while(str[i]=='0')
            i++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();   
    }
    return 0;
}