#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,m;cin>>n>>m;
    int arr[m];
    int sum = 0;
    for(int i=0;i<m;i++)
    cin>>arr[i];
    for(int i=0;i<m;i++)
    sum+=arr[i];
    if(sum<n || sum>(n*m))
    {
        cout<<0<<endl;
        return;
    }
    if(sum/n==m)
    {
        cout<<n<<endl;
        return;
    }
    else if(sum/n==(m-1))
    {
        cout<<sum%n<<endl;
        return;
    }
    else
    cout<<0<<endl;
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