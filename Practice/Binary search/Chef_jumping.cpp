#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"yes"<<endl;
        return 0;
    }
    if(n%6==0 || n%6==1 || n%6==3)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}