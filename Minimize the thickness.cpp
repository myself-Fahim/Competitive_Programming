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
        int n, total_sum = 0;
        cin >> n;
        vi v(n);
        vi v2;
        vi v3;
        for0(n)
        {
            cin >> v[i];
            total_sum += v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += v[j];
            }
            v2.push_back(sum);
        }

        int sum2 = 0, cnt = 0, max_cnt = 0, ans = n;
        for (int i = 0; i < n; i++)
        {
            if (total_sum % v2[i] == 0)
            {
                max_cnt = i + 1;
                for (int j = i + 1; j < n; j++)
                {
                    sum2 += v[j];
                    cnt++;
                    if (v2[i] == sum2)
                    {
                        max_cnt = max(max_cnt, cnt);
                       
                        cnt = 0;
                        sum2 = 0;
                    }
                }
                if (sum2 == 0)
                {
                    ans = min(ans, max_cnt);
                }
            }
            sum2 = 0;
            cnt = 0;
        }
        cout << ans << endl;
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
