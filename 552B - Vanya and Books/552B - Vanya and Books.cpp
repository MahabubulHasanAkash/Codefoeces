#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n,x=1,y=9,sum=0,i;
    ll arr[10]={0};
    cin>>n;
    int leng = log10(n)+1;
    for(i=0;i<leng-1;++i)
    {
        n-=y;
        arr[i] = x*y;
        y*=10; x++;
    }
    arr[i] = n*x;
    for(i=0;i<leng;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

