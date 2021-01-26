#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==3) cout<<"YES\n";
    else if(n==2 && m==2) cout<<"YES\n";
    else cout<<"NO\n";

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

