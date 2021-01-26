#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll arr[10005];
void solve()
{
    int n,k,f,t;
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>f>>t;
        if(k<t) arr[i] = f-(t-k);
        else arr[i]=f;
    }
    sort(arr,arr+n,greater<ll>());
    cout<<arr[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

