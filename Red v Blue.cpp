
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
        int n, r, b, sum1 = 0, sum2, cnt = 1, cnt2 = 1;
        cin >> n >> r >> b;
        sum1 = r % (b + 1);
        sum2 = r / (b + 1);
        int x = b;
        if (sum1 == 0)
        {
            for (int i = 1; i <= b + 1; i++)
            {
                for (int j = 1; j <= sum2; j++)
                {
                    cout << 'R';
                }
                if (x > 0)
                {
                    cout << 'B';
                    x--;
                }
            }
            cout << endl;
        }
        else
        {
            int y = r;

            for (int i = 1; i <= sum1; i++)
            {
                for (int j = 1; j <= sum2 + 1; j++)
                {
                    cout << 'R';
                    y--;
                }
                if (x > 0)
                {
                    cout << 'B';
                    x--;
                }
            }
            int flag=0;

            for (int i = 1; i <= r - sum1; i++)
            {
                for (int j = 1; j <= sum2; j++)
                {
                    if (y <= 0){
                        flag=1;
                        break;}
                    else
                    {
                        cout << 'R';
                        y--;
                    }
                }
                if(flag)
                break;
                if (x > 0)
                {
                    cout << 'B';
                    x--;
                }
            }
            cout << endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
