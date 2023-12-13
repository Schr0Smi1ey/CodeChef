#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    return gcd(b%a,a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,hcf;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==0)
            hcf = arr[i];
            else 
            hcf = gcd(hcf,arr[i]);
        }
        cout<<hcf<<endl;
    }
}