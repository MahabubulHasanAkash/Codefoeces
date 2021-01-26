#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll toDecimel(int arr[],int n,int base)
{
    ll power = 1, number = 0;
    for(int i=n-1;i>=0;i--)
    {
        number += arr[i]*power;
        power *= base;
    }
    return number;
}
void solve()
{
    int n,bx,m,by;
    cin>>n>>bx;
    int x[n];
    for(int i=0; i<n ; ++i)
        cin>>x[i];
    cin>>m>>by;
    int y[m];
    for(int i=0; i<m ; ++i)
        cin>>y[i];

    ll X = toDecimel(x,n,bx);
    ll Y = toDecimel(y,m,by);
    if(X>Y) cout<< '>';
    else if(X<Y) cout<< '<';
    else cout<< '=';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    solve();
return 0;
}

