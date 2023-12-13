#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int n;
    cin>>n;
    if(n<=3)
    cout<<"BRONZE"<<endl;
    else if(n>3 && n<6)
    cout<<"SILVER"<<endl;
    else
    cout<<"GOLD"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}