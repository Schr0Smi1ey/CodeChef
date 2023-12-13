#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int l,r;cin>>l>>r;
    if(l%2==0)
    cout<<l<<" "<<l+1<<" "<<l+2<<" "<<l+3<<endl;
    else
    {
        if(l+4>r)
        cout<<-1<<endl;
        else
        cout<<l+1<<" "<<l+2<<" "<<l+3<<" "<<l+4<<endl;
    } 
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