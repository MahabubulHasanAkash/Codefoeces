#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for(int i= 2*n+2; i<=4*n; i+=2)
    {
        cout<<i<<endl;
    }
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

