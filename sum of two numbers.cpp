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
        ll n;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << endl;
        else
        {
            if (((n + 1) / 2) % 10 == 0)
            {
                int flag = 1;
                vll x, y;
                string s = to_string(n);
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] - '0' == 0)
                    {
                        x.push_back(0);
                        y.push_back(0);
                    }
                    else if ((s[i] - '0') % 2 == 0)
                    {
                        x.push_back((s[i] - '0') / 2);
                        y.push_back((s[i] - '0') / 2);
                    }
                    else
                    {
                        if (flag)
                        {
                            x.push_back((s[i] - '0') / 2 + 1);
                            y.push_back((s[i] - '0') / 2);
                            flag = 0;
                        }
                        else
                        {
                            x.push_back((s[i] - '0') / 2);
                            y.push_back((s[i] - '0') / 2 + 1);
                            flag = 1;
                        }
                    }
                }
                int f1=0,f2=0;

                for (int i = 0; i < x.size(); i++)
                {
                    if (x[i] == 0 && f1==0)
                        continue;
                    else{
                        cout << x[i];
                        f1=1;
                    }
                }
                cout<<" ";
                for (int i = 0; i < y.size(); i++)
                {
                    if (y[i] == 0 && f2==0)
                        continue;
                    else{
                        cout << y[i];
                        f2=1;
                    }
                }
                cout<<endl;
            }
            else
            {
                cout << n / 2 << " " << (n / 2) + 1 << endl;
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
