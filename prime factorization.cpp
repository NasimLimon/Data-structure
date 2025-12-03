// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mx = 1e7 + 5;
int lp[mx];             // lowest prime factor
vector<int> primes;

// Linear Sieve to fill lp[] and primes[]
void linear_sieve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (lp[i] == 0)   // i is prime
        {
            lp[i] = i;
            primes.push_back(i);
        }

        for (int p : primes)
        {
            if (p > lp[i] || 1LL * i * p > n) // stop conditions
                break;

            lp[i * p] = p; // set lowest prime factor for i*p
        }
    }
}

// Prime factorization using lp[]
vector<int> factorize(int x)
{
    vector<int> factors;
    while (x > 1)
    {
        int p = lp[x];
        while (x % p == 0)
        {
            factors.push_back(p);
            x /= p;
        }
    }
    return factors;
}

int main()
{
    optimize();

    int N = 1e7;
    linear_sieve(N);

    // Example: first 50 primes
    cout << "First 50 primes: ";
    for (int i = 0; i < 50; i++)
        cout << primes[i] << " ";
    cout << endl;

    // Example: Factorization query
    int num;
    cout << "Enter a number to factorize: ";
    cin >> num;

    vector<int> factors = factorize(num);

    cout << "Prime Factors: ";
    for (int f : factors)
        cout << f << " ";
    cout << endl;

    return 0;
}
