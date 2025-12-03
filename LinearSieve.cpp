// IN THE NAME OF SUPREME & MERCIFUL GOD
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int mx = 1e7 + 5;
int lp[mx];              // lowest prime (সবচেয়ে ছোট মৌলিক গুণনীয়ক)
vector<int> primes;      

void linear_sieve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (lp[i] == 0)      // i এখনও composite হিসেবে মার্ক হয়নি
        {
            lp[i] = i;       // i নিজের lowest prime divisor
            primes.push_back(i);
        }

        // মৌলিক সংখ্যা দিয়ে i এর পরবর্তী সংখ্যাগুলোকে composite marked করা
        for (int p : primes)
        {
            if (p > lp[i] || p * i > n)
                break;

            lp[p * i] = p;   // p*i এর সবচেয়ে ছোট prime হলো p
        }
    }
}

int main()
{
    optimize();

    int N = 1e7;
    linear_sieve(N);

    for (int i = 0; i < 50; i++)
        cout << primes[i] << " ";
}
