#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
// #define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    ll n,m,x;cin>>n>>m;
    ll sum = (n*(n+1))/2;
    ll temp = 0;
    while(m--)
    {
        cin>>x;
        temp+=x;
    }
    cout<<(sum-temp)<<endl;
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
    return 0;
}