#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll arr[10005];
void solve()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
     for(int i=0;i<n;++i){
         for(int j=0;j<n;++j){
             for(int k=0;k<n;++k){
                if(i!=j && j!=k && k!=i && arr[i]==arr[j]+arr[k])
                {
                     cout<<i+1<<" "<<j+1<<" "<<k+1<<" ";
                     return;
                }

             }
         }
     }
    cout<<-1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

