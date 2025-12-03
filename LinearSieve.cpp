
১) ।oop চলছে ১...N
২) যার lp[i] নেই সে prime;  lp[i]==0
৩) primes list-এ রাখো
৪) সব primes দিয়ে composite বানাও:  x = i*p
৫) LPF rule ভাঙলে break;  p > lp[i]
৬) Range rule ভাঙলে break;  p * i > n
৭) composite x এর Ip সেট করো Ip[x] = p;  lp[p * i] = p


// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mx = 1e7 + 5;

int lp[mx];     // lowest prime factor
int hp[mx];     // highest prime factor
vector<int> primes;

void linear_sieve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (lp[i] == 0)
        {
            lp[i] = hp[i] = i; // i is prime
            primes.push_back(i);
        }

        for (int p : primes)
        {
            if (p > lp[i] || 1LL * p * i > n)
                break;

            lp[p * i] = p;
            hp[p * i] = max(hp[i], p);
        }
    }
}

int main()
{
    optimize();

    int N = 100;
    linear_sieve(N);

    for (int i = 2; i <= 30; i++)
    {
        cout << "Number: " << i 
             << " | lp: " << lp[i] 
             << " | hp: " << hp[i] << endl;
    }
}
