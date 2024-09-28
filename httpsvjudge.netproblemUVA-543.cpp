// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
const int mx = 1e6 + 2;
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
   // primes.push_back(2);
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
    int lim = 1e6;
    sieve(lim);
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        bool check = false;
        for (int i = 0; i < primes.size(); i++)
        {

            if (primes[i] > n)
                break;
            int a = primes[i];
            int b = n - a;

            if (isPrime[b])
            {
                cout << n << " = " << primes[i] << " + " << b << endl;
                check = true;
                break;
            }
        }
        if (check == false)
            cout << "Goldbach's conjecture is wrong." << endl;
    }
}