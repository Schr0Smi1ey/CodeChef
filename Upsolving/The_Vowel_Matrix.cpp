#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
bool isvowel(char ch)
{
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
void solve()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    ll vowelcount = 0,lastvowelindex = -1,result = 1;
    for(int i=0;i<str.size();i++)
    {
        if(isvowel(str[i]))
        {
            if(vowelcount==0 && lastvowelindex!=-1)
            {
                result = (result*(i-lastvowelindex))%mod; // (i-lastvowelindex) = consonant_char + 1
            }
            vowelcount++;
            if(vowelcount==k)
            {
                vowelcount=0;
                lastvowelindex = i;
            }
        }
    }
    cout<<result<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


