#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,res=0;
void solve()
{
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2) res++;
    }
    cout<<res;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
