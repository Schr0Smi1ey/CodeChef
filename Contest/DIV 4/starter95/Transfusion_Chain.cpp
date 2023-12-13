#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
void solution()
{
    int arr[4]={0};
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="A")
        arr[0]++;
        else if(str=="B")
        arr[1]++;
        else if(str=="AB")
        arr[2]++;
        else
        arr[3]++;
    }
    int total = arr[3];
    if(arr[0]>0 && arr[1]>0 && arr[2]>0)
    {
        total += max(arr[0],arr[1])+arr[2];
    }
    else if(arr[0]>0 && arr[2]>0)
    {
        total += arr[0]+arr[2];
    }
    else if(arr[1]>0 && arr[2]>0)
    {
        total += arr[1]+arr[2];
    }
    else if(arr[0]>0 && arr[1]>0)
    {
        total += max(arr[0],arr[1]);
    }
    else 
    {
        total+=arr[0]+arr[1]+arr[2];
    }
    if(total==0)
    cout<<1<<endl;
    else
    cout<<total<<endl;
    return;
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