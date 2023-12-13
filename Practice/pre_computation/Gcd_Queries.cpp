#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n,q;cin>>n>>q;
    int arr[n+1],forward_gcd[n+5],backward_gcd[n+5];
    for(int i=1;i<=n;i++) // for pre-computation we will use 1-based indexing
    {
        cin>>arr[i];
    }
    forward_gcd[0]=backward_gcd[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        forward_gcd[i]= __gcd(arr[i],forward_gcd[i-1]);
    }
    for(int i=n;i>=1;i--)
    {
        backward_gcd[i]= __gcd(arr[i],backward_gcd[i+1]);
    }
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<__gcd(forward_gcd[l-1],backward_gcd[r+1])<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0 ;
}

    // int n,q;cin>>n>>q;int arr[n+1];
    // for(int i=1;i<=n;i++)
    // {
    //     cin>>arr[i];
    // }
    // int forward_gcd[n+1],backward_gcd[n+1];
    // forward_gcd[0]= 0;
    // backward_gcd[n+1] = 0;
    // for(int i=1;i<=n;i++)
    // {
    //     forward_gcd[i]=__gcd(forward_gcd[i-1],arr[i]);
    // }
    // for(int i=n;i>=1;i--)
    // {
    //     backward_gcd[i]=__gcd(arr[i],backward_gcd[i+1]);
    // }
    // while(q--)
    // {
    //     int l,r;
    //     cin>>l>>r;
    //     cout<<__gcd(forward_gcd[l-1],backward_gcd[r+1])<<endl;
    // }