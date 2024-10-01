
// IN THE NAME OF SUPREME AND MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int mx = 1e7 + 10;
int cnt;  // every prime divisors frequency
int cnt1 = 0; // number of prime divisor
int nod = 1;  // number of all divisors
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
vector<int> factorize(int n)
{
    vector<int> factor;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
             cnt1++;
             cnt=0;
            while (n % p == 0)
            {
                factor.push_back(p);
                n = n / p;
                cnt++;
            }
            cnt++;
            nod *= cnt;
        }
    }

    if (n > 1)
    {
        factor.push_back(n);
        nod *= 2;
    }
    return factor;
}
int main()
{
    optimize();
    int lim = 1e7 + 10;
    sieve(lim);
    int t;
    cin >> t;
    vector<int> factorization = factorize(t);
    cout << cnt1 << endl;
    cout << nod << endl;
    for (auto r : factorization)
    {
        cout << r << " ";
    }
    return 0;
}
