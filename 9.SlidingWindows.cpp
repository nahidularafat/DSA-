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
    int n=10;
    int a[n]={4,5,6,3,1,4,8,5,7,6};
    int k =3;
    int sum=0;
    int maxsum=0;
    for(int i=0; i< k ; i++)
    {
        sum += a[i];

    }

    maxsum = sum;
    int i=0;
    int j = k;
    while(j<n)
    {
        sum -= a[i];
        sum+= a[j];
        i++;
        j++;
        maxsum = max(maxsum,sum);
    }
    cout<<maxsum;
    return 0;
}
