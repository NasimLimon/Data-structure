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

const int mx = 1e7 + 2;
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
                isPrime[j] = 0;
        }
    }
    isPrime[2] = 1;

    prime.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        if (isPrime[i])
            prime.push_back(i);
    }
}

int PHI(int n)
{
    int m = n;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
            m = m * (p - 1) / p;
        }
    }
    if (n > 1)
    {
        m = m * (n - 1) / n;
    }
    return m;
}

int main()
{
    optimize();
    int lim = 1e7;
    sieve(lim);

    int N, d;
    cin >> N >> d;

    int result = PHI(N / d); // number of pairs that gcd(a,N)=d.(a=1,2,3,4 ....N).
    cout << result << endl;

    return 0;
}
