#include<bits/stdc++.h>
using namespace std;
// the gift
int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    if((x+m)>=n)
    puts("YES");
    else
    puts("NO");
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// gymkhana election IIIT
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<(m/2)+1<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,om_count=0,addy_count=0,temp;
        cin>>n;
        int om[n];
        int addy[n];
        for(int i=0;i<n;i++)
        cin>>om[i];
        for(int i=0;i<n;i++)
        cin>>addy[i];
        for(int i=0;i<n;i++)
        {
            temp = 0;
            if(om[i]!=0)
            {
                while(om[i]!=0 && i<n)
                {
                    temp++;
                    i++;
                    if(i>=n)
                    break;
                }
            }
            om_count = max(temp,om_count);
        }
        for(int i=0;i<n;i++)
        {
            temp = 0;
            if(addy[i]!=0 && i<n)
            {
                while(addy[i]!=0)
                {
                    temp++;
                    i++;
                    if(i>=n)
                    break;
                }
            }
            addy_count = max(temp,addy_count);
        }
        if(om_count==addy_count)
        {
            cout<<"Draw"<<endl;
            continue;
        }
        puts(om_count>addy_count?"Om":"Addy");
    }
    return 0;
}