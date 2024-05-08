#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define endl "\n"
#define int long long int
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

int custom_power(int base, int exponent) {
    int result = 1;
    while(exponent > 0) {
        if (exponent % 2 == 1) {
            if (result * base < result || (result * base) > 1e9 + 5)
                return -1;
            result *= base;
        }
        if (exponent > 1 && (base * base < base || (result * base) > 1e9 + 5))
            return -1;
        base *= base;
        exponent /= 2;
    }
    return result;
}

int search(int *arr, int n, int value, int power) {
    int low = 0, high = n - 1, ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        int powered = custom_power(arr[mid], power);
        if (powered <= value && powered != -1) {
            ans = mid + 1;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

void solution() {
    int n;cin >> n;
    int a[n],b[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    int ans = 0;
    for(int i= 0;i < n ;i++){
        ans += search(b,n,a[i],i+1);
    }
    cout << ans << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}


