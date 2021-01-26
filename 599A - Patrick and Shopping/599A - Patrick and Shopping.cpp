#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int d1,d2,d3,res,x;
    cin>>d1>>d2>>d3;
    res = min(d1+d2+d3, min(2*d1 + 2*d2, min(2*d1 + 2*d3 , 2*d2 + 2*d3)));
    cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

