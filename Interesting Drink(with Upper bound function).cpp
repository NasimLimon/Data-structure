// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
// const int mx=1e5+5;
// int arr[mx];
int main()
{
    // optimize();
    int x;
    cin >> x;
    int arr[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int t;
    sort(arr,arr+x);
    cin >> t;
    while (t--)
    {
        int n,count;
        cin >> n;
        count = upper_bound(arr, arr + x, n) -arr;
        printf("%d\n", count);
    }

    return 0;
}