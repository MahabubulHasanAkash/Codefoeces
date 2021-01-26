#include <bits/stdc++.h>
using namespace std;
int n, k, l, c, d, p, nl, np;
void solve()
{
    cin>> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = ((k*l)/nl)/n;
    int b = (c*d)/n;
    int c = (p/np)/n;
    int d = min(a,b);
    d = min(c,d);
    cout<<d;



}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

