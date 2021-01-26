#include <bits/stdc++.h>
using namespace std;
int r1,r2,c1,c2,d1,d2,a,b,c,d;
void solve()
{
    cin>>r1>>r2;
    cin>>c1>>c2;
    cin>>d1>>d2;
    a=(r1+c1-d2)/2;
    b=r1-a;
    c=c1-a;
    d=d1-a;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d
        && a<=9 && a>=1
        && b<=9 && b>=1
        && c<=9 && c>=1
        && d<=9 && d>=1
        && c + d == r2
        && b + d == c2
        && a + d == d1)
    {
        cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<"\n";
    }
    else
        cout<<"-1\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
