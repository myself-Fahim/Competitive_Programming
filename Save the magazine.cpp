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
        ll n, sum = 0,sum2=0, val, f = 0, minn = 10010, index;
        cin >> n;
        string s;
        cin >> s;
        vll a(n);
        vll minnn;
        for0(n)
        {
            cin >> a[i];
            sum += a[i];
        }
        for0(n)
        {
            if (s[i] == '0' && f == 0)
            {
                minn = a[i];
                f = 1;
            }
            else if (s[i] == '0' && f == 1)
            {
                minnn.push_back(minn);
                minn = a[i];
            }
            else if (s[i] == '1' && f == 1 && i == n - 1)
            {
                minn = min(minn, a[i]);
                minnn.push_back(minn);
            }
            else if (s[i] == '1' && f == 1)
                minn = min(minn, a[i]);
        }
        if (s[n - 1] == '0')
            minnn.push_back(a[n - 1]);
        for (auto u : minnn)
        {
            sum2 += u;
        }
        cout << sum -sum2<<endl;
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
