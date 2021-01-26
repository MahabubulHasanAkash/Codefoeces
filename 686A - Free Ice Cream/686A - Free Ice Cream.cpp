#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,counter=0;
    ll x,d;
    cin>>n>>x;
    ll sum=x;
    char ch[n];
    int arr[n];
    for(int i=0; i<n; ++i)
    {
      cin>>ch[i]>>arr[i];
    }
    for(int i=0; i<n; ++i)
    {
      if(ch[i]=='+')
      {
          sum += arr[i];
      }
      else if(ch[i]=='-' && sum >= arr[i])
      {
          sum -= arr[i];
      }
      else
        ++counter;
    }
    cout<<sum<<" "<<counter;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
