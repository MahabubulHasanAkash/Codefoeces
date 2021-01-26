#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll k,n,w,t=0;
    cin>>k>>n>>w;
    t = ((k*w)*(w+1))/2;
    if(t>n) cout<<t-n;
    else cout<<0;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
