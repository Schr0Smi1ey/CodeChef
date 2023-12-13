#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
void solution()
{
    string str;cin >> str;
    bool flag[8] = {false};
    string fixed = "codechef";
    string result = "";
    for(int i=0;i<8;i++)
    {
        if(str[i] == fixed[i])
        {
            for(int j=0;j<8;j++)
            {
                if(i != j && str[i] != fixed[j] && fixed[i] != str[j])
                {
                    swap(str[i],str[j]);
                }
            }
        }
    }
    for(int i=0;i<8;i++)
    {
        if(str[i] == fixed[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << str << endl;
}
signed main()
{
    fastio;
    int t;cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}