// IN THE NAME OF SUPREME AND MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}
const int mx = 1e8 + 10;
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
int PHI(int n)
{
    int phi = n;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n = n / p;
            }
            phi *= (p - 1);
            phi /= p;
        }
    }
    if (n > 1)
    {
        phi *= (n - 1);
        phi /= n;
    }
    return phi;
}
int main()
{
    optimize();
    int lim = 1e8;
    sieve(lim);
    int n;
    cin >> n;
    int x = PHI(n);
    cout << x << endl;
    return 0;
}
