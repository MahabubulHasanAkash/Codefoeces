#include <bits/stdc++.h>
using namespace std;
double n,x,sum=0;
void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    sum/=100;
    sum/=n;
    printf("%.12f",sum*100);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
