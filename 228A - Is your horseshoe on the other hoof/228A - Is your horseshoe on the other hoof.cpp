#include <bits/stdc++.h>
using namespace std;
int arr[5],cnt=3;
void solve()
{
  for(int i=0;i<4;i++) cin>>arr[i];
  sort(arr,arr+4);
  for(int i=0;i<3;i++)
  {
     if(arr[i]!=arr[i+1]) cnt--;
  }
  cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

