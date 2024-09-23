// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, t, ans = 0, u = 0;
    cin >> n >> t;
    int extra = 240 - t;
    int arr[n + 2];
    arr[1] = 5;
    for (int i = 2; i <= n; i++)
    {
        int u = 5 * i + arr[i - 1];
        arr[i] = u;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > extra)
            break;
        if (arr[i] <= extra)
            ans++;
    }

    cout << ans  << endl;
}
