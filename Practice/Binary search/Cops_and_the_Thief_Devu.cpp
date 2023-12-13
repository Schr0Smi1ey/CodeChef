#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int m,x,y,covered,safe=0;cin>>m>>x>>y;int arr[m];
    for(auto &c:arr)
    cin>>c;
    int flag[105] = {0};
    for(int i=0;i<m;i++)
    {
        covered = x*y;
        int temp = arr[i];
        flag[temp]++;
        while(arr[i]>=1 && covered--)
        {
            flag[--arr[i]]++;
            
        }
        covered = x*y;
        while(temp<=100 && covered--)
        {
            flag[++temp]++;
        }
    }
    for(int i=1;i<101;i++)
    {
        if(flag[i]==0)
        safe++;
    }
    cout<<safe<<endl;
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