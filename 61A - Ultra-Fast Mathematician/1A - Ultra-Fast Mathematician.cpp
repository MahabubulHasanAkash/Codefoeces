#include <bits/stdc++.h>
using namespace std;
string a,b;
void solve()
{
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='0' && b[i]=='1') cout<<1;
        if(a[i]=='1' && b[i]=='0') cout<<1;
        if(a[i]=='1' && b[i]=='1') cout<<0;
        if(a[i]=='0' && b[i]=='0') cout<<0;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
