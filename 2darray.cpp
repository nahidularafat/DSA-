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

void solve(int a[3][3]) //a[] can write
{
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}

int main() {
    FIO
     int a [3][3];
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             cin>>a[i][j];
         }
     }
     solve(a);
    return 0;
}
