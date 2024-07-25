
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

    int n= 4;
    int a[n]= {1,-2,3,4};
    int mx = 0;

    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            mx= max(mx,sum);
        }
    }

    cout<<mx<<endl;


    return 0;
}
