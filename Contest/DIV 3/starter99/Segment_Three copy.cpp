#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n;cin>>n;int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int ans = INT_MAX;
    for(int i=0;i<3;i++)
    {
        int increment;
        for(int j=0;j<3;j++)
        {
            increment = 0;
            int x = arr[0];
            int y = arr[1];
            while(x%3!=i)
            {
                x++;
                increment++;
            }
            while(y%3!=j)
            {
                y++;
                increment++;
            }
            for(int k=2;k<n;k++)
            {
                int z = arr[k];
                int total = x+y+z;
                while(total%3!=0)
                {
                    z++;
                    total++;
                    increment++;
                }
                x = y;
                y = z;
            }
            ans = min(ans,increment);
        }
    }
    cout<<ans<<endl;
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