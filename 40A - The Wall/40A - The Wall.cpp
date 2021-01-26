#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll x,y,a,b,l;
    cin>>x>>y>>a>>b;
    l = (x*y)/__gcd(x,y);
    b/=l;
    a--;
    a/=l;
    cout<<b-a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

