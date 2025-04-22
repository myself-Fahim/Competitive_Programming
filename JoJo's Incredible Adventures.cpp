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
        string s;
        cin >> s;
        ll cnt_1 = 0, n = s.size();
        for0(n)
        {
            if (s[i] == '1')
                cnt_1++;
        }
        ll maxx_cnt = 0, maxx = 0;
        if (cnt_1 == 0)
            cout << "0" << endl;
        else if (cnt_1 == n){
            ll ans= n*n;
            cout<<ans<<endl;
        }
           
        else
        {
            s += s;
            ll n2=s.size();
            for0(n2)
            {
                if (s[i] == '1')
                {
                    maxx_cnt++;
                    if (i == n - 1)
                    {
                        maxx = max(maxx, maxx_cnt);
                    }
                }
                else
                {
                    maxx = max(maxx, maxx_cnt);
                    maxx_cnt = 0;
                }
            }
            if (maxx == 1)
            {
                if (s[0] == '1' && s[n - 1] == '1')
                    cout << "2" << endl;
                else
                    cout << "1" << endl;
            }
            else
            {
                ll len = (maxx + 1) / 2;
                ll br = (maxx + 1) - len;
                cout << len * br << endl;
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
