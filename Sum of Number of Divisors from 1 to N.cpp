// IN THE NAME OF SUPREME AND MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    optimize();
    int n;
    cin >> n;
    //O(sqrt(N))
    int SNOD = 0;

    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)
    {
        SNOD += (n / i) - i;
    }
    SNOD *= 2;
    SNOD += sq;
    /*
     //O(N)
      for (int i = 1; i <= n; i++)
      {
          SNOD += n / i;
      }*/
    cout << SNOD << endl;

    return 0;
}