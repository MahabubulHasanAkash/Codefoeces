#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n,x;
    cin>>n;
    for(int i = 2;i<=35;i++)
    {
        ll denom = pow(2,i)-1;
        if(n%denom) continue;
        x=n/denom;
        break;
    }
     cout<<x<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
       solve();
return 0;
}

