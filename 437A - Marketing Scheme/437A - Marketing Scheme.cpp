#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int l,r;
    cin>>l>>r;
    if(2*l>r)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
