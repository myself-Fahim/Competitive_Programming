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
    int t, q, x, v;
    cin >> t;
    whl
    {
        string s;
        int cnt = 0;
        cin >> s;

        for (int i = 0; i < s.length() - 3; i++)
        {
            if (s.substr(i, 4) == "1100")
                cnt++;
        }
        cin >> q;
        for (int i = 1; i <= q; i++)
        {
            cin >> x >> v;
            x--;
            for (int j = x - 3; j < x + 1; j++)
            {
                if (j < 0 || j + 3 >= s.length())
                    continue;
                if (s.substr(j, 4) == "1100")
                    cnt--;
            }
            s[x] = '0' + v;
            for (int j = x - 3; j < x + 1; j++)
            {
                if (j < 0 || j + 3 >= s.length())
                    continue;
                if (s.substr(j, 4) == "1100")
                    cnt++;
            }
            if (cnt > 0)
                cout << Y << endl;
            else
                cout << N << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
