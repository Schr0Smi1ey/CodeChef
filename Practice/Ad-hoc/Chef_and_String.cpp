#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
// string right_shift(string temp)
// {
//     string str = temp;
//     reverse(str.begin(),str.begin()+1);
//     reverse(str.begin()+1,str.end());
//     reverse(str.begin(),str.end());
//     return str;
// }

string right_shift(string s)
{
    return s.back() + s.substr(0,s.length()-1);
}

// string left_shift(string temp)
// {
//     string str = temp;
//     reverse(str.end()-1,str.end());
//     reverse(str.begin(),str.end()-1);
//     reverse(str.begin(),str.end());
//     return str;
// }

string left_shift(string s)
{
    return s.substr(1,s.length()) + s.front();
}

void solution()
{
    string str;cin>>str;
    if(left_shift(str)==right_shift(str))
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
signed main()
{
    fastio;
    int t;cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}