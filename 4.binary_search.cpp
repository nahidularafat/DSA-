#include <bits/stdc++.h>
#define nl '\n'
#define yes (cout << "YES\n")
#define no (cout << "NO\n")
#define yy (cout << "Yes\n")
#define nn (cout << "No\n")
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long long, long long>
#define rev(a) reverse(a, a + n);
#define Srev(s) reverse(s.begin(), s.end());
#define sz(s) s.size()
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FIO
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int low = 0;
    int high = n - 1;
    int f = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
        {
            f = 1;
            break;
        }
    
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        
        else
        {
            low = mid + 1;
        }
    }
    if (f == 1)
    {
        yes;
    }
    else
    {
        no;
    }
    return 0;
}
