#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count=0;
    for(int i=0;i<n;i++)
    {
        int greater=0,less=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<=arr[i])
            less++;
            else
            greater++;
        }
        if(less>greater)
        count++;
    }
    cout<<count<<endl;
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