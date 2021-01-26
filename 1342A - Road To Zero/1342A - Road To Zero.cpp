#include<bits/stdc++.h>
using namespace std;
int x,y,a,b;
void solve()
{
    cin>>x>>y;
    cin>>a>>b;
    if(x<y) swap(x,y);
    if(2*a>b) cout<<y*b+(x-y)*a<<"\n";
    else cout<<(x+y)*a<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t,x,y,a,b,minm;
    cin>>t;
    while(t--)
    solve();
    return 0;
}


