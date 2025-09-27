#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const ll INF = 1e18;
struct seg
{
    vector <ll> b = {0,0,0};
    ll ans;
};
void Solve()
{
    ll n;

    cin >> n;
    vector <ll> a(3);
    for (auto & el : a)
        cin >> el;

    vector <seg> dp(n + 1);
    dp[0].ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[j] + i <= n)
            {

                seg tr = dp[i];

                tr.b[j] += 1;
                sort(tr.b.begin(),tr.b.end());
                ll cnt = tr.b[0] + tr.b[1] + tr.b[2];
                if (tr.b[2] - tr.b[0] < 2)
                {
                    if (dp[i + a[j]].ans == dp[i].ans + 1)
                    {
                        ll p = dp[i + a[j]].b[0] + dp[i + a[j]].b[1] +  dp[i + a[j]].b[2];
                        if (cnt < p && dp[i + a[j]].ans < dp[i].ans + 1)
                        {
                            dp[i + a[j]].ans = max(dp[i + a[j]].ans,dp[i].ans + 1);
                            dp[i + a[j]].b = dp[i].b;
                            dp[i + a[j]].b[j]++;
                        }
                        continue;
                    }
                    if (dp[i + a[j]].ans < dp[i].ans + 1)
                    {
                        dp[i + a[j]].ans = max(dp[i + a[j]].ans,dp[i].ans + 1);
                        dp[i + a[j]].b = dp[i].b;
                        dp[i + a[j]].b[j]++;
                    }

                }
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans = max(ans,dp[i].ans);
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
