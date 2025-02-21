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
#define for0(n) for (int i = 0; i < (n); i++)
#define for1(n) for (int i = 1; i < (n); i++)
#define fore1(n) for (int i = 1; i <= (n); i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> ans;
        for0(n)
        {
            cin >> v[i];
        }
        vector<pair<int, int>> p(n);
        for0(n)
        {
            if (v[i] % k == 0)
                ans.push_back(i);
            else
                p[i] = {i, (v[i] % k)};
        }
        sort(p.begin(), p.end(), [&](pair<int, int> a, pair<int, int> b)
             {
                 if (a.second > b.second)
                     return true;
                 else if (a.second == b.second)
                     return (a.first < b.first);
                else
                return false; });
        for (auto u : p)
            ans.push_back(u.first);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] + 1 << " ";
        }
        cout << endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
