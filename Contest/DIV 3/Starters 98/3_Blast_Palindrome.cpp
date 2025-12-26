#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mypower(x, n) ({int p=1;for(int i=0;i<n;i++){p*=x;}p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;string str;cin>>str;if(n%3==1){cout<<"YES"<<endl;return;}
    for(char ch='a';ch<='z';ch++)
    {
        int l=n,r=-1;
        for(int i=0;i<n;i++)
        {
            if(str[i]==ch && i%3==0)
            {
                l=i;
                break;
            }
        }
        for(int i=n;i>=0;i--)
        {
            if(str[i]==ch && (n-1-i)%3==0)
            {
                r=i;
                break;
            }
        }
        if(l<=r)
        {
            cout<<l<<" "<<r<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
}