#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N= 1e8;
int Prime[N];
void seivePrime()
{
  ll sq = sqrt(N);
  for(int i=4;i<=N;i+=2) Prime[i]=1;
  for(int i=3;i<sq;i+=2)
  {
      if(Prime[i]==0)
      {
          for(int j = i*i ; j <= N ; j+=i) Prime[j]=1;
      }
  }
  Prime[1]=1;
  Prime[0]=1;
}
ll up(int n)
{
    for(int i = n+1;i >= 2 ; i++)
    if(Prime[i]==0)
    {
        return i;
        break;
    }
}
ll under(int n)
{
    for(int i = n ;i <=n ; i++)
    if(Prime[i]==0)
    {
        return i;
        break;
    }
}
ll gcd(ll x,ll y)
{
    if(x==0)
        return y;
    if(y==0)
        return x;
    return gcd(y%x,x);
}
int main()
{
    seivePrime();
    ll n;
    int u,v,p,q,g,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        v=up(n);
        u=under(n);
        p=(u*v)+2*(n-u-v+1);
        q=2*u*v;
        g=gcd(p,q);
        cout<<p/g<<"/"<<q/g<<"\n";
    }
    return 0;
}
