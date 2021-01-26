#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    vector<pair<ll,ll>> even,odd;
    int n,x;
    cin>>n;
    for(int i=0;i<n;++i)
    {
       cin>>x;
       if(x%2==0) even.push_back({i+1,x});
       else odd.push_back({i+1,x});
    }
    if (even.size()==1) cout<<even[0].first;
    else cout<<odd[0].first;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

