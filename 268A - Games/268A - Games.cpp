#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,ans=0;
    cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(p[i].first==p[j].second)
                    ans++;
            }
        }

    }
    cout<<ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

