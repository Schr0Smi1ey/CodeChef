#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    ll n,m,h;
    cin>>n>>m>>h;
    ll car[n];
    ll outlet[m];
    for(int i=0;i<n;i++)
    cin>>car[i];
    for(int i=0;i<m;i++)
    cin>>outlet[i];
    sort(car,car+n,greater<ll>());
    sort(outlet,outlet+m,greater<ll>());
    int temp = min(n,m);
    int i=0;
    ll power = 0;
    while(temp--)
    {
        power += min((outlet[i]*h),car[i]);
        i++;
    }
    cout<<power<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}