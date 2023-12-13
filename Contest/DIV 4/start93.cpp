#include<bits/stdc++.h>
using namespace std;
// right there
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        puts(x>=n?"YES":"NO");      
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// rings
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if((n*x)>9999 && (n*x)<100000)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// problem
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,flag=0;
        cin>>n>>m;
        if(n==m)
        {
            puts("YES");
            continue;
        }
        else if(n>m && (n-m)%2==0)
        {
            puts("YES");
            continue;
        }
        else
        {
            if((m-n)%2==0)
            puts("YES");
            else
            puts("NO");
        }
    }
    return 0;
}