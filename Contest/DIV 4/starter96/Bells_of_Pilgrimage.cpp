#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,x,k,p;
    cin>>n>>x>>k>>p;
    int temp = n-x;
    if(k==0)
    {
        cout<<p<<endl;return;
    }
    while(x--)
    {
        p+=10;k--;n--;
        if(k==0)
        {
            break;
        }
    }
    while(temp--)
    {
        if(k==0)
        {
            break;
        }
        p+=5;k--;n--;
    }
    if(n==0)
    p+=20;
    cout<<p<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;while(t--)
    {
        solution();
    }
    return 0;
}