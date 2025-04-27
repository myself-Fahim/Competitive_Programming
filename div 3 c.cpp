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
        ll n, k, f = 0, cnt = 0;
        cin >> n >> k;
        vll a(n);
        vll b(n);
        for0(n)
        {
            cin >> a[i];
        }
        for0(n)
        {
            cin >> b[i];
            if (b[i] == -1)
                cnt++;
        }
        ll maxx = max_element(a.begin(), a.end()) - a.begin();
        ll minn = min_element(a.begin(), a.end()) - a.begin();
        if (cnt == n)
        {
            if (k + a[minn] < a[maxx])
                cout << "0" << endl;
            else
            {
                cout << abs((k + a[minn] - a[maxx])) + 1 << endl;
            }
        }
        else
        {
            set<int> s;
            for (int i = 0; i < n; i++)
            {
                if (b[i] != -1)
                    s.insert(a[i] + b[i]);
                if (b[i] != -1 && (a[i] + b[i]) < a[maxx] || (b[i] != -1 && b[maxx] != -1 && a[i] + b[i] > a[maxx] + b[maxx]))
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << "0" << endl;
            else if (s.size() > 1)
                cout << "0" << endl;
            else if ((b[minn] == -1 && b[maxx] == -1 && a[minn] + k < a[maxx]) || (b[minn] == -1 && b[maxx] != -1 && a[minn] + k < a[maxx] + b[maxx]))
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
