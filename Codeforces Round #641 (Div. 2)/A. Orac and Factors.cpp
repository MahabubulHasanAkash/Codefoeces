#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll lowestDiv(int n)
{
    if(n%2 == 0) return 2;
    else
    {
        for(int i=3;i*i <= n ;i+=2)
        {
            if(n%i==0) return i;
        }
    }
    return n;
}
void solve()
{
    ll n,k,temp=0;
    cin>>n>>k;
    if(n&1)
    {
        cout<<(n+lowestDiv(n))+((k-1)*2)<<"\n";
    }
    else cout<<n+(2*k)<<"\n";
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
