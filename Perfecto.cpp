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
        ll n, sum, sqr2;
        cin >> n;
        sum = (n * (n + 1)) / 2;
        ld sqr = sqrt(sum);
        sqr2 = sqr;
        // cout << "sqr: " << sqr << " " << "sqr2:" << sqr - sqr2 << endl;
        if (sqr - sqr2 == 0)
            cout << "-1" << endl;
        else
        {
            vll v(n);
            if (n & 1)
            {
                ld sqr = sqrt(n);
                sqr2 = sqr;
                if (sqr - sqr2 == 0)
                {

                    for (int i = 0, j = n-1; i < n ; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    for (int i = 1, j = n; i < n; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    v[n-1]=1;
                    for (int i = 0; i < n; i++)
                        cout << v[i] << " ";
                    cout << endl;
                }
                else{
                    for (int i = 0, j = n; i < n ; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    for (int i = 1, j = 2; i < n; i += 2)
                    {
                        v[i] = j;
                        j += 2;
                    }
                    for (int i = 0; i < n; i++)
                        cout << v[i] << " ";
                    cout << endl;
                }
            }
            else
            {
                ld sqr = sqrt(n);
                sqr2 = sqr;
                if (sqr - sqr2 == 0)
                {
                    for (int i = 0, j = n - 1; i < n; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    for (int i = 1, j = n; i < n; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    for (int i = 0; i < n; i++)
                        cout << v[i] << " ";
                    cout << endl;
                }
                else
                {
                    for (int i = 0, j = n; i < n; i += 2)
                    {
                        v[i] = j;
                        j -= 2;
                    }
                    for (int i = 1, j = 1; i < n; i += 2)
                    {
                        v[i] = j;
                        j += 2;
                    }
                    for (int i = 0; i < n; i++)
                        cout << v[i] << " ";
                    cout << endl;
                }
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
