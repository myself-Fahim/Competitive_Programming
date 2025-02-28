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
        ll n, x, k, sec = 0, cnt = 0;
        cin >> n >> x >> k;
        string s;
        cin >> s;
        map<ll, ll> m;
        for (int i = 0; i < n;)
        {
            if (s[i] == 'L')
            {
                x--;
                sec++;
                if (cnt == 2)
                    break;
                else
                {
                    if (x == 0 && cnt == 0)
                    {
                        cnt++;
                        m[cnt] = sec;
                        i = 0;
                    }
                    else if (x == 0 && cnt == 1)
                    {
                        cnt++;
                        m[cnt] = sec;
                        i++;
                    }
                    else
                        i++;
                }
            }
            else
            {
                x++;
                sec++;
                if (cnt == 2)
                    break;
                else
                {
                    if (x == 0 && cnt == 0)
                    {
                        cnt++;
                        m[cnt] = sec;
                        i = 0;
                    }
                    else if (x == 0 && cnt == 1)
                    {
                        cnt++;
                        m[cnt] = sec;
                        i++;
                    }
                    else
                        i++;
                }
            }
        }
        // for(auto u:m){
        //     cout<<u.first<<" "<<u.second<<endl;
        // }
        if (m[1] == 0 && m[2] == 0)
            cout << "0" << endl;
        else if (m[2] == 0)
            cout << "1" << endl;
        else
        {
            ll ans = (k - (m[1])) / ((m[2]) - (m[1] + 1) + 1);
            ans += 1;
            cout << ans << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
