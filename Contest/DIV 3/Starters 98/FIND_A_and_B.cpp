#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int a,b,c;cin>>a>>b>>c;
    if((a*b)%c==0)
    cout<<a*b<<" "<<c<<endl;
    else if((a*c)%b==0)
    cout<<a*c<<" "<<b<<endl;
    else if((b*c)%a==0)
    cout<<b*c<<" "<<a<<endl;
    else
    cout<<-1<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}