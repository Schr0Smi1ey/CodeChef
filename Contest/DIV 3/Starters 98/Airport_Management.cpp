#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    int arr[n],dep[n];
    int fre[1450]={0};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        fre[arr[i]]++;
    }
    for(auto &x:dep)
    {
        cin>>x;
        fre[x]++;
    }
    sort(fre,fre+1450);
    cout<<fre[1449]<<endl;
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