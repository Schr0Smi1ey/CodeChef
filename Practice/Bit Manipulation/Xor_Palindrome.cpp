#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;string str;cin>>str;
    int low = 0,high = str.size()-1,count=0;
    while(low<=high)
    {
        if(str[low]!=str[high])
        {
            count++; // number of voilation 
        }
        low++;high--;
    }
    cout<<(count+1)/2<<endl; // as in operation we handle two error
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