// IN THE NAME OF SUPREME AND MERCIFUL GOD

#include <bits/stdc++.h>
using namespace std;

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
vector<int> primeFactor(int n)
{
    vector<int> factor;
    for (auto p : prime)
    {
        if (p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                factor.push_back(p);
                n = n / p;
            }
        }
    }
    if (n > 1)
        factor.push_back(n);
    return factor;
}
int main()
{
    optimize();
    int lim = 1e6 + 10;
    sieve(lim);
    int nn;
    cin >> nn;
    vector<int> factorization = primeFactor(nn);
    for (auto q : factorization)
    {
        cout << q << " ";
    }

    return 0;
}