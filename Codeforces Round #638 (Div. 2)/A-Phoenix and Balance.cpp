#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll binpow(ll a,ll n)
{
    if(n==0)
    return a;
    ll res=1;
     while(n>0)
     {
         if(n & 1)
            res*=a;
        a *= a;
        n >>= 1;
     }
     return res;
}
void solve()
{
    int n,sum=0,sum1=0;
    cin>>n;
    if(n==2) cout<<2<<endl;
    else
    {
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=binpow(2,i+1);
    for(int i=0;i<n/2-1;i++) sum+=arr[i];
    sum+=arr[n-1];
    for(int i=n/2-1;i<n-1;i++) sum-=arr[i];
    cout<<sum<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
return 0;
}

