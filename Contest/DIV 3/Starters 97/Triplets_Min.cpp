// #include<bits/stdc++.h>
// using namespace std;
// #define endl "\n"
// #define ll long long int
// #define int long long int
// #define getbit(n,i) (((n) & (1LL << (i))) !=0)
// int search(int arr[], int n, int target)
// {
//     int low = 0, high = n - 1, ans = n-1; 
//     if (arr[low] >= target)
//         return low;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] >= target)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         low = mid + 1;
//     }
//     return ans;
// }
// void solution()
// {
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     cin>>arr[i];
//     sort(arr,arr+n);
//     int temp[n-2];
//     int q = n-1,i=0;
//     int size = q;
//     while(q--)
//     {
//         temp[i]=(q*(q+1))/2;
//         i++;
//     }
//     for(int i=1;i<n-2;i++)
//     {
//         temp[i]=temp[i]+temp[i-1];
//     }
//     while(k--)
//     {
//         int x;
//         cin>>x;
//         cout<<arr[search(temp,size,x)]<<endl;
//     }
// }
// signed main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int t;cin>>t;
//     while(t--)
//     {
//         solution();
//     }
//     return 0;
// }

// online compiler giving error while using arr....using vector solve the issue
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define int long long int
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
int search(int arr[], int n, int target)
{
    int low = 0, high = n - 1, ans = n-1; 
    if (arr[low] >= target)
        return low;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;
    }
    return ans;
}
void solution()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.begin(),arr.end());
    int temp[n-2];
    int q = n-1,i=0;
    int size = q;
    while(q--)
    {
        temp[i]=(q*(q+1))/2;
        i++;
    }
    for(int i=1;i<n-2;i++)
    {
        temp[i]=temp[i]+temp[i-1];
    }
    while(k--)
    {
        int x;
        cin>>x;
        cout<<arr[search(temp,size,x)]<<endl;
    }
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