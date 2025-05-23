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
        vll a(n);
        vll ans;
        map<int, int> m;
        for0(n)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto u : m)
        {
            if (u.second >= 2)
                ans.push_back(u.first);
        }
        if (ans.empty())
            cout << "-1" << endl;
        else if (ans.size() == 1 && m[ans[0]] >= 4)
            cout << ans[0] << " " << ans[0] << " " << ans[0] << " " << ans[0] << endl;
        else if (ans.size() >= 2)
            cout << ans[0] << " " << ans[0] << " " << ans[1] << " " << ans[1] << endl;
        else
        {
            int f = 0;

            vll ans2;
            for (auto u : m)
            {
                if (u.second < 2)
                    ans2.push_back(u.first);
            }
            sort(ans2.begin(), ans2.end());
            if (m[ans[0]] == 3)
            {
                if (((abs(ans2[0] - ans[0]))/2) < ans[0])
                {
                    cout << ans2[0] << " " << ans[0] << " " << ans[0] << " " << ans[0] << endl;
                    f = 1;
                }
                else
                {
                    for (int i = 1; i < ans2.size(); i++)
                    {
                        if (((ans2[i] - ans2[i - 1])/2) < ans[0])
                        {
                            f = 1;
                            cout << ans2[i] << " " << ans2[i - 1] << " " << ans[0] << " " << ans[0] << endl;
                            break;
                        }
                    }
                }
            }
            else
            {
                for (int i = 1; i < ans2.size(); i++)
                {
                    if (((ans2[i] - ans2[i - 1])/2) < ans[0])
                    {
                        f = 1;
                        cout << ans2[i] << " " << ans2[i - 1] << " " << ans[0] << " " << ans[0] << endl;
                        break;
                    }
                }
            }

            if (f == 0)
                cout << "-1" << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
