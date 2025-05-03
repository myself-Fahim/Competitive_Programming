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
        int cnt = 0, f = 0;
        string s, p;
        cin >> p >> s;
        vector<pair<char, int>> p1;
        vector<pair<char, int>> s1;
        for (int i = 0, j = 0; i < p.size(); i++)
        {

            if (i == p.size() - 1)
            {

                if (cnt == 0)
                    p1.push_back({p[i], 1});

                else
                {
                    cnt++;
                    p1.push_back({p[i], cnt});
                }
            }
            else if (p[i] == p[i + 1])
                cnt++;
            else
            {
                cnt++;
                p1.push_back({p[i], cnt});
                cnt = 0;
                j++;
            }
        }

        cnt = 0;
        for (int i = 0, j = 0; i < s.size(); i++)
        {
            if (i == s.size() - 1)
            {
                if (cnt == 0)
                    s1.push_back({s[i], 1});

                else
                {
                    cnt++;
                    s1.push_back({s[i], cnt});
                }
            }
            else if (s[i] == s[i + 1])
                cnt++;
            else
            {
                cnt++;
                s1.push_back({s[i], cnt});
                cnt = 0;
                j++;
            }
        }


        if (s1.size() == p1.size())
        {
            for (int i = 0; i < p1.size(); i++)
            {
                if (s1[i].second > (2 * (p1[i].second)) || s1[i].second < p1[i].second || s1[i].first != p1[i].first)
                {
                    f = 1;
                    break;
                }
            }
            if (f)
            {
                cout << N << endl;
                f = 0;
            }
            else
                cout << Y << endl;
        }
        else
            cout << N << endl;
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
