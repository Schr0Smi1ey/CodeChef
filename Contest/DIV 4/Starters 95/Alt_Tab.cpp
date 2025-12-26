#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
class unique_order
{
    public:
        vector<string> order;
        unordered_set<string> unique; // to get only the unique strings
        void insert(string str)
        {
            if(unique.insert(str).second) // second returns the boolean value if it got inserted then return true else return false
            {
                order.push_back(str); //if true we push the string into the order to maintain the order
            }
        }
        string result;
        string ans() // form the resultant string 
        {
            for(auto x : order) 
            {
                string temp = x;
                int n=temp.size();
                result+=temp[n-2];
                result+=temp[n-1];
            }
            return result;
        }
};
int main()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    int i=0,n1=n;
    while(n1--)
    {
        string str;
        cin>>str;
        arr[i]=str;
        i++;
    }
    i=n-1;n1=n;
    unique_order container;
    while(n1--) // insert the element in container in reverse order
    {
        container.insert(arr[i]);
        i--;
    }
    cout<<container.ans()<<endl;
    return 0;
}