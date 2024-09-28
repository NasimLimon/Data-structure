// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int mx = 1e7 + 2;
bitset<mx> isPrime;
vector<int> primes;
void sieve(int n)
{
    for (int i = 3; i <= n; i += 2)
    {
        isPrime[i] = 1;
    }
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
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}
int main()
{
    optimize();
    int lim = 1e7;
    sieve(lim);
    for (int i = 0; i < 50; i++)
    {
        cout << primes[i] << " ";
    }
}