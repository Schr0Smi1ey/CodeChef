#include<bits/stdc++.h>
using namespace std;
// append for or
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int total = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total|=arr[i];
    }
    for(int i=0;i<=k;i++)
    {
        if((total|i)==k)
        {
            cout<<i<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}