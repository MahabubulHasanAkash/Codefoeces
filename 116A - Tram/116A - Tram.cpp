#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,pasCnt=0,mx=0;
    cin>>n;
    cin>> a >> b;
    pasCnt=b;
    mx=pasCnt;
    n--;
    while(n--)
    {
       cin>>a>>b;
       pasCnt-=a;
       pasCnt+=b;
       if(pasCnt>mx) mx=pasCnt;

    }
    cout<<mx;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

