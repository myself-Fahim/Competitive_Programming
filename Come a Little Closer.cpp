/* In the name of Allah, Most Gracious, Most Merciful*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define cint cin >> t
#define whl while (t--)
#define vi vector<int>
#define vll vector<ll>
#define Y "YES"
#define N "NO"
#define ascii(n) static_cast<int>(n);
const int MOD = 1e9 + 7; // Example modulus for large numbers
const int INF = INT_MAX; // Infinity representation
#define for0(n) for (ll int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i <= (n); i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first < p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);
    else
        return 0;
    // Or *(-1) with p.first
}
// for (auto &u : s)
// {
//     u = tolower(static_cast<unsigned char>(u));
// }
void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        ll n;
        cin >> n;
        vll x(n);
        vll y(n);
        vll a;
        vll b;
        for0(n)
        {
            cin >> x[i] >> y[i];
            a.push_back(x[i]);
            b.push_back(y[i]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans1 = a[n - 1] * b[n - 2];
        ll ans2 = a[n - 2] * b[n - 1];
        cout << min(ans1, ans2) << endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
