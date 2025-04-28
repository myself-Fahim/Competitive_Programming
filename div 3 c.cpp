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
        ll n, k, f = 0, cnt = 0;
        cin >> n >> k;
        vll a(n);
        vll b(n);
        set<int> s;
        for0(n)
        {
            cin >> a[i];
        }
        for0(n)
        {
            cin >> b[i];
            if (b[i] == -1)
                cnt++;
        } 
        ll maxx=0;
        for0(n){
            if(b[i] != -1)
            {
                maxx=max(a[i]+b[i],maxx);
            }
        }
         ll minn=min_element(a.begin(),a.end())-a.begin();
         ll maxxx=max_element(a.begin(),a.end())-a.begin();
        for0(n)
        {
            if(b[i] != -1 && (a[i] + b[i]) != maxx || (b[i] == -1 && a[i] + k < maxx) 
            || a[i] > maxx )
            {
                f=1;
                break;
            }
     
        }
       
        if (f == 1 && cnt!=n)
            cout << "0" << endl;
        else if (cnt == n)
            cout << ((a[minn] + k) - a[maxxx]) + 1 << endl;
        else
            cout << "1" << endl;
    }
}

int main()
{
    Ahlan_Wa_Sahlan();
}
