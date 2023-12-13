#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// parking charges
int main()
{
    int x,y,h;
    cin>>x>>y>>h;
    int sum = x;
    h--;
    sum = sum + (h*y);
    cout<<sum;
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// odd GCD permutation
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=n;i>=1;i--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// blobby volley scores
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char str[n+1];
        scanf("%s",str);
        int alice = 0,bob = 0;
        if(str[0]=='A')
        alice++;
        for(int i=1;i<n;i++)
        {          
            if(str[i]=='A')
            {
                if(str[i]==str[i-1])
                alice++;
            }
            else 
            {
                if(str[i]==str[i-1])
                bob++;
            }
        }
        cout<<alice<<" "<<bob<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
//chef odd
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int odd = (n+1)/2;
        odd-=k;
        // cout<<odd;
        if(n>=2*k && odd%2==0 && odd>=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// bus seat numbering
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>=1 && x<=10)
        cout<<"Lower Double"<<endl;
        else if(x>=11 && x<=15)
        cout<<"Lower Single"<<endl;
        else if(x>=16 && x<=25)
        cout<<"Upper Double"<<endl;
        else
        cout<<"Upper Single"<<endl;
    }
    return 0;
}