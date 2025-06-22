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
        int n;
        cin >> n;
        set<int> s;
        vector<ll> v(n);
        vector<ll> res;
        for0(n)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
        ll sum, f = 0, ind;

        for0(n - 1)
        {
            sum = 0;
            if (v[i] == v[i + 1] && f == 0)
            {
                ind = i + 1;
                f = 1;
            }
            else if (v[i] == v[i + 1] && f == 1)
                continue;
            else if (v[i] != v[i + 1] && f == 1)
            {
                sum = ((ind - 1) * v[i]) + ((n - (i + 1)) * v[i]);
                res.push_back(sum);
                f = 0;
            }
            else
            {
                if (i == 0 || i == n - 1)
                {
                    sum = (n - 1) * v[i];
                    res.push_back(sum);
                }
                else
                {
                    sum = (((i + 1) - 1) * v[i]) + ((n - (i + 1)) * v[i]);
                    res.push_back(sum);
                }
                // for (auto u : res)
                //     cout << u << " ";
            }
        }
        if (f == 1)
            res.push_back((ind - 1) * v[n - 1]);

        res.push_back((n - 1) * v[n - 1]);
        int ans = min_element(res.begin(), res.end()) - res.begin();
        cout << res[ans] << endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
