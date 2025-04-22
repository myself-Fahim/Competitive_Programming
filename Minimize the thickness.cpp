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
        vi v(n);
        vi v2;
        
        for0(n)
        {
            cin >> v[i];
        
        }
    
       
       
            int sum = 0, cnt = 0, max_cnt = 0, sum2 = 0, ans=0, flag = 1;
            for (int i = 0; i < n; i++)
            {
                sum += v[i];
                for (int j = i + 1; j < n; j++)
                {
                    sum2 += v[j];
                    if (sum2 > sum)
                    {
                        cnt = 0;
                        sum2 = 0;
                        flag = 1;
                        break;
                    }
                    else if (sum2 < sum)
                    {
                        cnt++;
                        flag = 1;
                    }
                    else
                    {
                        cnt++;
                        max_cnt = max(cnt, i + 1);
                        ans = max(ans, max_cnt);
                        cnt = 0;
                        sum2 = 0;
                        flag = 0;
                    }
                }

                if (flag == 0)
                {
                    v2.push_back(ans);
                }
                flag = 1;
                ans = 0;
            }
            if (v2.size() == 0)
                cout << n << endl;
            else
            {
                sort(v2.begin(), v2.end());
                cout << v2[0] << endl;
            }
        
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
