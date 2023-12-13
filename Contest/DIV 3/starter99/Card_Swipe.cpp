#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int count = 0,temp = INT_MIN;
    bool flag[200005] ={false};
    for(int i=0;i<n;i++)
    {
        if(flag[arr[i]]==false)
        {
            flag[arr[i]]=true;
            count++;
        }
        else
        {
            count--;
            flag[arr[i]]=false;
        }
        temp = max(count,temp);
    }
    cout<<temp<<endl;
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