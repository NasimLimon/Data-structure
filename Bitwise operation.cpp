// IN THE NAME OF SUPREME & MERCIFUL GOD
// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)
void faltu() { cerr << endl; }
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

int main()
{
    optimize();
    int a, b, c, d;
    a = 5, b = 6, c = 7, d = 3;
    int BitAND = a & b;
    int BitOR = a | b;
    int BitXOR = a ^ b;
    int BitNot = ~a;
    int leftShift = d << 3;

    int rightShift = leftShift >> 1;
    int nthPositionValue1 = (b >> 1) & 1; // 1 number index
    int nthPositionValue0 = (b >> 0) & 1; // 0 number index

    cout << " AND: " << BitAND << endl;
    cout << " OR: " << BitOR << endl;
    cout << " XOR: " << BitXOR << endl;

    cout << " NOT: " << BitNot << endl;
    cout << " LeftS: " << leftShift << endl;
    cout << " RightS: " << rightShift << endl;
    cout << "nthPositionValue1:" << nthPositionValue1 << endl;
    cout << "nthPositionValue0:" << nthPositionValue0 << endl;

    ;
}
