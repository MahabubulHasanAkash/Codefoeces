#include <bits/stdc++.h>
using namespace std;
bool primeArr[100];
int a,b;
bool flag=true;
bool isPrime(int n)
{
    if(n<=1) return 0;
     for(int j=2;j*j<=n;j++)
     {
         if(n%j==0) return 0;
     }
    return 1;
}
void solve()
{
    for(int i=2;i<100;i++)
    {
        if(isPrime(i)) primeArr[i]=1;
    }
    cin>>a>>b;
    for(int i=a+1;i<b;i++)
        if(primeArr[i]==1) flag=false;
    cout<<(primeArr[b]==1 && flag?"YES":"NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
