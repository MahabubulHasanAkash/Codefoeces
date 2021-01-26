#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int year,a=0,b=0,c=0,d=0;
    cin>>year;
    for(int i=year+1;i<=10000;++i)
    {
        a=i%10;
        b=i/10%10;
        c=i/100%10;
        d=i/1000%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d &&c!=d)
        {
            cout<<i;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
