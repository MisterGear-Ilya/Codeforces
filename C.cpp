#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll INF = 1e18;
void Solve()
{
    ll n;
    cin >> n;
    if (n == 1 || n == 2 || n == 4)
    {
        cout << -1 << '\n';
        return;
    }
    if (n % 3 == 0)
    {
        cout << n / 3 << ' ' << 0 << ' ' << 0 << '\n';
        return;
    }
    if (n % 3 == 1)
    {
        cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << '\n';
        return;
    }
    cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << '\n';

}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    ll tt = 1;

    //cin >> tt;

    while (tt-->0)
        Solve();
}
