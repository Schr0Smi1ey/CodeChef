#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int arr[3],arr2[3];
    for(auto &x:arr)
    cin>>x;
    for(auto &x:arr2)
    cin>>x;
    sort(arr,arr+3);
    sort(arr2,arr2+3);
    if((arr[2]+arr[1])>(arr2[2]+arr2[1]))
    cout<<"Alice"<<endl;
    else if((arr[2]+arr[1])<(arr2[2]+arr2[1]))
    cout<<"Bob"<<endl;
    else
    cout<<"Tie"<<endl;
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