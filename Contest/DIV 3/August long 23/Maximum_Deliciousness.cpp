#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    int n,k,l,x,y;
    cin >> n >> k >> l;
    priority_queue<int> pq;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        pq.push(x);
    }
    int sum = 0;
    while(!pq.empty())
    {
        x = l - 1;
        y = k - l;
        while(x--)
        {
            if(!pq.empty())
            pq.pop();
        }
        if(!pq.empty())
        {sum += pq.top();pq.pop();}
        while(y--)
        {
            if(!pq.empty())
            pq.pop();
        }
    }
    cout << sum << endl;
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