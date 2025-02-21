#include <bits/stdc++.h>
using namespace std;
void activity(int st[], int fi[], int n)
{
    int i = 0, j;
    cout << i << " ";
    for (j = 1; j < n; j++)
    {
        if (st[j] >= fi[i])
        {
            cout << j << " ";
            i = j;
        }
    }
}
int main()
{

    int n;
    int st[]={1, 3, 0, 5, 8, 5 };
    int fi[]={2, 4, 6, 7, 9, 9};
    n=sizeof(st)/sizeof(st[0]);
    activity(st, fi, n);
}