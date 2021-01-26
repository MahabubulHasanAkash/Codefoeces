#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{

    int t;
    cin>>t;
    read:
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll i=2;i<=n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                goto read;
            }
        }
        cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

