#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,v;
        cin >> n >> k >> v;
        int arr[n];
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int flag = (n+k) * v;
        int flag2 = flag - sum;
        if(flag2 > 0 && flag2 % k == 0)
            cout << flag2 / k << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
