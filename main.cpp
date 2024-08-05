#define _CRT_SECURE_NO_WARNINGS

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4")
#pragma argsused

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using item = pair<ll, int>;
using pii = pair<int, int>;

#define _USE_MATH_DEFINES
#define mp make_pair
#define pb push_back
#define popb pop_back
#define all(x) x.begin(), x.end()

const ll INF = 1e18 + 1, MOD = 1e9 + 7, SIGM = 1e6;

// prints vector
template <typename T> ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const T &x : v)
    {
        out << x << ' ';
    }
    return out;
}

int main()
{
#ifndef _DEBUG
    cout << fixed << setprecision(10);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    double a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) * c;
}