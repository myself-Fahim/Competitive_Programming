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
        int n, n_o = 0, n_e = 0, flag = 0;
        ll m_o = 0, m_e = 0;
        cin >> n;
        vll v(n);
        vll v2;
        for0(n)
        {
            cin >> v[i];
            if (v[i] & 1)
            {
                n_o++;
                m_o = max(m_o, v[i]);
            }
            else
            {
                v2.push_back(v[i]);
                n_e++;
                m_e = max(m_e, v[i]);
            }
        }
        sort(v2.begin(),v2.end());

        if (n_o == 0 || n_e == 0)
            cout << "0" << endl;
        else
        {
            int cnt = 0;
            for(int i=0;i<v2.size();i++)
            {
                if (v2[i] < m_o)
                {
                    m_o += v2[i];
                }
                else 
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            cout << n_e+1 << endl;
            else
            cout<<n_e<<endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
