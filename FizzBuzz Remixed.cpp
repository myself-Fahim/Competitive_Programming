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
    ll t;
    cin >> t;
    whl
    {
        ll n, sum = 0, val;
        cin >> n;
        if (n <= 2)
            cout << n + 1 << endl;
        else
        {
            val = n / 15;
            if (n % 15 == 0)
            {
                sum = (val - 1) * 2;
                sum += val;
            }
            else
            {
                ll num=n-1;
                if (num % 15 == 0)
                {
                    sum = val * 2;
                    sum += val;
                    sum--;
                }
                else
                {
                    sum = val * 2;
                    sum += val;
                }
            }
            sum += 3;
            cout << sum << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
