#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
int search(int n)
{
    int low=1,high = 1e5,ans;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        int temp = (mid*(mid+1))/2;
        if(temp<=n)
        {
            ans = mid;
            low = mid+1;
        }
        else
        high = mid-1;
    }
    return ans;
}
void solution()
{
    int n;cin>>n;
    cout<<search(n)<<endl;
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