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
// bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
// {
//     if (p1.first < p2.first)
//         return 1;
//     else if (p1.first == p2.first)
//         return (p1.second > p2.second);
//     else
//         return 0;
//     // Or *(-1) with p.first
// }

// for (auto &u : s)
// {
//     u = tolower(static_cast<unsigned char>(u));
// }
bool cmp(vector<string> &v, int x, int y)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[x][y] == '1')
        {
            return x < y;
        }
        else
            return x > y;
    }
}

void Ahlan_Wa_Sahlan()
{
    optimize();
    int t;
    cin >> t;
    whl
    {
        int n, cnt = 0;
        cin >> n;
        vector<string> v(n);
        vector<pair<int, int>> v1(n);
        vector<int> ans(n);
        for0(n)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < i && v[i][j] == '0' || j > i && v[i][j] == '1')
                    cnt++;
            }
            v1[i].first = i+1;
            v1[i].second = cnt;
            cnt = 0;
        }
        for (int i = 0; i < n; i++)
        {
            ans[n - (v1[i].second)-1] = v1[i].first;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
