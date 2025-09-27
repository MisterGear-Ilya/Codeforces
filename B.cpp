#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll INF = 1e18;
void Solve()
{
    ll n;
    cin >> n;

    string s;

    cin >> s;
    ll cntL = 0;
    ll cntR = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            cntR++;
    }

    ll ans = 1e18;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            cntR--;
        ans = min(ans,cntR + cntL);
        if (s[i] == 'L')
            cntL++;
    }
    cout << ans << '\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);

    ll tt = 1;

    //cin >> tt;

    while (tt-->0)
        Solve();
}
