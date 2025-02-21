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
        int n;
        cin >> n;
        vector<int> v(n);
        int farr[n + 10] = {0};
        map<int, int> m;
        int num1 = 0, num2 = 0, count = 0, flag1 = 0, flag2 = 0;
        for0(n)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        for (auto u : m)
        {
            if (u.second >= 2 && u.first != num1 && count == 0)
            {
                count++;
                num1 = u.first;
            }
            else if (count > 0 && u.second >= 2 && u.first != num1)
            {
                count++;
                num2 = u.first;
                break;
            }
        }
        if (count <= 1)
            cout << "-1" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == num1 && flag1 == 0)
                {
                    cout << "1" << " ";
                    flag1=1;
                }
                else if (v[i] == num1 && flag1 == 1)
                {
                    cout << "2" << " ";
                }
                  else if (v[i] == num2 && flag2 == 0)
                {
                    cout << "1" << " ";
                    flag2=1;
                }
                  else if (v[i] == num2 && flag2 == 1)
                {
                    cout << "3" <<" ";
                }
                else
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
    }
}
int main()
{
    Ahlan_Wa_Sahlan();
}
