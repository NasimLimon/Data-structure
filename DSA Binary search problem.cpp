//problem solve with binary search

//https://vjudge.net/contest/639854#problem/G

#include <bits/stdc++.h>

using namespace std;


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


vector<long long> v;


int main() {

    optimize();

    

    long long element, query;

    scanf("%lld %lld", &element, &query);

    

        for (int i=1;i<=element;i++) {


        long long u;

        scanf("%lld", &u);

        v.push_back(u);

    }

    

    sort(v.begin(), v.end());

    

    while (query--) {

        long long x;

        scanf("%lld", &x);

        

        long long lower = 0;

        long long higher = v.size() - 1;

        long long ans = -1;

        

        while (lower <= higher) {

            long long middle =  (higher + lower) / 2;

            

            if (v[middle] == x) {

                ans = middle;

                higher = middle - 1;

//break;

            } else if (v[middle] > x) {

                higher = middle - 1;

            } else {

                lower = middle + 1;

            }

        }

        

        printf("%lld\n", ans);

    }


    return 0;

}



