#include<bits/stdc++.h>
using namespace std;
// dotify playlist
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        memset(arr,0,sizeof(arr));
        int m,li,i=0;
        while(n--)
        {
            cin>>m>>li;
            if(li==l)
            arr[i++]=m;
        }
        if(i<k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(arr,arr+i,greater<int>());       
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// water filling
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int count=0;
        int k=3;
        while(k--)
        {
            cin>>n;
            if(n==0)
            count++;
        }
        if(count>=2)
        cout<<"Water filling time"<<endl;
        else
        cout<<"Not now"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// oneful pairs
int main()
{
    int a,b;
    cin>>a>>b;
    if(a+b + (a*b)==111)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}


// Upsolved 
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
// Rectangular tiling
void solution(){
    int a,b;cin >> a >> b;
    if(a % 2 != 0 && b % 2 != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--){
        solution();
    }
    return 0;
}