#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    vector<int> temp;
    for(int i=0;i<n;i++)
    cin>>v[i];
    int left = n-k-1;
    int right = n-left-1;
    for(int i=0;i<n;i++)
    {
        if(i<=left || i>=right)
        {
            temp.push_back(v[i]);
        }
    }
    sort(temp.begin(),temp.end());
    int index = 0;
    for(int i=0;i<n;i++)
    {
        if(i<=left || i>=right)
        {
            v[i]=temp[index];
            index++;
        }
    }
    for(auto x : v)
    cout<<x<<" ";
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;while(t--)
    {
        solution();
    }
    return 0;
}