
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
#define for0(n) for (ll int i = 0; i < (n); i++)
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
        int n, m;
        cin >> n >> m;
        char arr[n + 10][m + 10];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        if (n == 1)
        {
            if (arr[0][0] == arr[0][m - 1])
            {
                cout << Y << endl;
            }
            else
                cout << N << endl;
        }
        else if (m == 1)
        {
            if (arr[0][0] == arr[n - 1][0])
                cout << Y << endl;
            else
                cout << N << endl;
        }
        else
        {
            string first_row;
            string last_row;
            string first_col;
            string last_col;
            for (int i = 0; i < m; i++)
            {
                first_row += arr[0][i];
                last_row += arr[n - 1][i];
            }
            for (int i = 0; i < n; i++)
            {
                first_col += arr[i][0];
                last_col += arr[i][m - 1];
            }
            if (arr[0][0] == arr[n - 1][m - 1] || arr[0][m - 1] == arr[n - 1][0])
                cout << Y << endl;
            else
            {
                if (first_row[0] == 'W' && first_row[m - 1] == 'W')
                {
                    int f = 0;
                    for (int i = 0; i < m; i++)
                    {
                        if (first_row[i] == 'B' || last_row[i] == 'W')
                        {
                            f = 1;
                            break;
                        }
                    }
                    if (f)
                        cout << Y << endl;
                    else
                        cout << N << endl;
                }

                else if (first_row[0] == 'B' && first_row[m - 1] == 'B')
                {
                    int f = 0;
                    for (int i = 0; i < m; i++)
                    {
                        if (first_row[i] == 'W' || last_row[i] == 'B')
                            f = 1;
                    }
                    if (f)
                        cout << Y << endl;
                    else
                        cout << N << endl;
                }
                else if (first_col[0] == 'B' && first_col[n- 1] == 'B')
                {
                    int f = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (first_col[i] == 'W' || last_col[i] == 'B')
                            f = 1;
                    }
                    if (f)
                        cout << Y << endl;
                    else
                        cout << N << endl;
                }
                else
                {
                    int f = 0;
                    for (int i = 0; i < n; i++)
                    {
                        if (first_col[i] == 'B' || last_col[i] == 'W')
                            f = 1;
                    }
                    if (f)
                        cout << Y << endl;
                    else
                        cout << N << endl;
                }
            }
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
