#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for(int i=0;i<n;)
    {
        int temp = 0;
        if(s[i]==':')
        {
            i++;
            while(true)
            {   
                if(s[i]==')')
                {
                    temp++;
                    i++;
                    continue;
                }
                else if(s[i]=='(')
                break;
                else if(s[i]==':' && temp>0)
                {
                    count++;
                    break;
                }
                else
                break;
            }
        }
        else 
        i++;
        
    }
    cout<<count<<endl;
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