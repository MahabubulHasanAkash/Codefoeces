#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int h,w,n,res;
    cin>>h>>w>>n;
    res=1;
    while(h%2==0)
    {
        h/=2;
        res*=2;
    }
    while(w%2==0)
    {
        w/=2;
        res*=2;
    }
    cout<<(res >= n? "YES\n" : "NO\n");
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

