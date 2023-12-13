#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    string str;cin>>str;
    int maxima = -1,temp = 0;
    for(int i=1;i<str.size()-1;i++)
    {
        if(str[i]==str[0] || str[i]==str.back())
        {
            maxima = max(maxima,temp);
            temp = 0;
        }
        else 
        temp++;
    }
    maxima = max(maxima,temp);
    maxima==0?cout<<-1<<endl:cout<<maxima<<endl;
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