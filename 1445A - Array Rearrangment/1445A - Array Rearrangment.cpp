#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    bool flag = false;
    for(int i=0;i<n;++i)
    {
        if((a[i]+b[i])<=x)
            flag = true;
        else
            {
                flag = false;
                break;
            }

    }
    if(flag)
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

