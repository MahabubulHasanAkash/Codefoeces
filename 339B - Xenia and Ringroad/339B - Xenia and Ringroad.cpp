#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,m,var,var1;
    cin>>n>>m;
    cin>>var;
    var1=var;
    ll count = var-1;
    for(int i=0;i<m-1;i++)
    {
        cin>>var;
        if(var>=var1)
        {
            count += var-var1;
        }
        else
        {
            count += ((n-var1)+var);
        }
        var1 = var;

    }
    cout<<count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
return 0;
}

