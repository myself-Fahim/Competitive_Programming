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
        ll l, r;
        cin >> l >> r;
        if (r <= 3)
            cout << "-1" << endl;
        else
        {
            if (r - l == 0)
            {
                if (l % 2 == 0 && r % 2 == 0)
                    cout << l - 2 << " " << "2" << endl;
                else
                {
                    int sq = sqrt(l),flag=0,num;
                    for (int i = 2; i <= sq; i++)
                    {
                        if (l % i ==0)
                        {
                            num=i;
                            flag = 1;
                            break;
                        }
                    }
                    if (flag)
                        cout << num << " " << l-num<<endl;
                    else
                        cout << "-1" << endl;
                }
            }
            else
            {
                if (l == 1 || l == 2)
                    cout << "2" << " " << "2" << endl;
                else
                {
                    if (l & 1)
                        cout << l - 1 << " " << "2" << endl;
                    else
                        cout << l - 2 << " " << "2" << endl;
                }
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
