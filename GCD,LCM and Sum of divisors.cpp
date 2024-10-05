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
int SOD(int nn)
{
    int sod = 1;
    for (auto p : prime)
    {
        if (1LL * p * p > nn)
            break;
        if (nn % p == 0)
        {
            int a = 1;
            int sum = 1;
            while (nn % p == 0)
            {
                a = a * p;
                sum = sum + a;
                nn = nn / p;
            }
            sod = sod * sum;
        }
    }
    if (nn > 1)
    {
        sod = sod * (nn + 1);
    }
    return sod;
}
int main()
{
    optimize();
    int n = 180;
    int m = 360;
    int x = gcd(n, m);
    int xx = lcm(n, m);
    cout << x << " " << xx << endl;
    int lim = 1e8;
    sieve(lim);
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << SOD(k) << endl;
    }
    return 0;
}
