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
        ll l, r, a, b, x, ans,i,j;
        cin >> l >> r >> x >> a >> b;
        i=a;
        j=b;
        a = min(i, j);
        b = max(i, j);
        if (b-a == 0)
            ans = 0;
        else if (b-a >= x)
            ans = 1;

        else if (b + x <= r || a - x >= l || (a + x) <= r && abs((a + x) - b) >= x || (b - x) >= l && abs((b - x) - a) >= x)
            ans = 2;
        else if (((a + x) <= r && (b - x) >= l) && abs((a + x) - (b - x)))
            ans = 3;
        else
            ans = -1;
        cout << ans << endl;
     
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
