#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int a,b,c,res=0;
    cin>>a>>b>>c;
    res = max((a+b)*c,(a*b*c));
    res = max(res,(a+b+c));
    res = max(res,a*(b+c));
    cout<<res;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
