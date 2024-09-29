// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int mx = 1e6 + 10;
bitset<mx> isPrime;
vector<int> prime;
void sieve(int n)
{
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    isPrime[2] = 1;
    prime.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
        }
    }
}
int main()
{
    optimize();
    int lim = 1e6 + 10;
    sieve(lim);
    int n;
    cin >> n;
    if (n <= 2)
        cout << 1 << endl;
    else
    {
        cout << 2 << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if (isPrime[i + 1])
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
    }
}