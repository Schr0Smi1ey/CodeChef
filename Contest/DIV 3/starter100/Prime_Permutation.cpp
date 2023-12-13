#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define INF INT_MAX
void solution()
{
    int n;cin>>n;
    if(n<4) 
    {
        cout<<-1<<endl;
        return;
    }
    int rem=n%4;
    rem = rem+4;
    if(rem==4) cout<<"3 4 1 2"<<" ";
    else if(rem==5) cout<<"4 5 1 2 3"<<" ";
    else if(rem==6) cout<<"4 5 6 1 2 3"<<" ";
    else if(rem==7) cout<<"6 7 1 2 3 4 5"<<" ";
    for(int i=rem+1;i<n; i+=4)
    {
        cout<<i+2<<" "<<i+3<<" "<<i<<" "<<i+1<<" ";
    }
    cout<<endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}