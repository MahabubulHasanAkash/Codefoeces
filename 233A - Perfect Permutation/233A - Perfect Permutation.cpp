#include <bits/stdc++.h>
using namespace std;
int n;
void solve()
{
    cin>>n;
    if(n%2==1 || n==0 ) cout<<"-1";
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0) cout<<i-1<<" ";
            else cout<<i+1<<" ";
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

