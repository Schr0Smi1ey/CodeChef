#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,m,k;cin>>n>>m>>k;
    int arr[n],maxima = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];maxima = max(maxima,arr[i]);
    }
    if(maxima+k-1<=m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
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