#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
#define mypower(x,n) ({int _p=1;for(int _i=0;_i<n;_i++){_p*=x;}_p;})
#define getbit(n,i) (((n) & (1LL << (i))) !=0)
void solution()
{
    int n;cin>>n;
    vector<pair<int,int>> v;
    int bound = INT_MIN,ans = INT_MAX;
    /*
        finding bound is the major issue here
        bound is X = max(min(a[i], b[i])) for all i(1, n)
        for considering a two maximum from two piles anyone should be greater than or equal to X 
    */
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        v.push_back({a,i});
        v.push_back({b,i});
        bound = max(bound,min(a,b));
    }
    sort(v.begin(),v.end());
    for(int i=2;i<2*n;i++)
    {
        if(v[i].first>=bound)
        {
            if(v[i].second==v[i-1].second) // means both element from same pair
            {
                ans = min(ans,abs(v[i].first-v[i-2].first));
            }
            else
            ans = min(ans,abs(v[i].first-v[i-1].first));
        }
    }
    cout<<ans<<endl;
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








// #include <iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// typedef pair<int,int> ii;
// typedef vector<ii> vii;
// void solve()
// {
//     int n,i,a,b,M=0,ans=INT_MAX;
//     cin >> n;
//     vii s;
//     for(i=0;i<n;i++)
//     {
//         cin >> a >>b;
//         s.push_back(make_pair(a,i));
//         s.push_back(make_pair(b,i));
//         M=max(M,min(a,b));
        
//     }
//     cout<<"M : "<<M<<endl;
//     sort(s.begin(),s.end());
//     for(i=2;i<(2*n);i++)
//     {
//         if(s[i].first>=M)
//         {
//             if(s[i-1].second==s[i].second)
//                 ans=min(ans,s[i].first-s[i-2].first);
//             else
//                 ans=min(ans,s[i].first-s[i-1].first);
            
//         }
//     }
//     cout<<ans<<endl;
    
// }
// int main() {
// 	// your code goes here
// 	int t;
// 	cin >> t;
// 	while(t--)
// 	    solve();
// 	return 0;
// }
