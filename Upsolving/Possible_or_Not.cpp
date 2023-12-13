#include<bits/stdc++.h>
using namespace std;
// possible or not
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        int andd= -1; // all bits are 1
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if((arr[i]&k)==k) //Suppose B has bit 
        // b set. Then, every A[i,j] must also have bit b set to be equal k.In particular, that means B is a submask of every A[i,j] .So, we only care about all those elements of A which have B as a submask.
            andd&=arr[i];
            //  1. Let L be the list of elements from A that have B as a submask (i.e,A[i]&B=B)
            // 2. If L is empty, the answer is No.
            // 3. Else, find the bitwise AND of all elements of L. If this equals B the answer is Yes; else No.
        }
        if(andd==k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}