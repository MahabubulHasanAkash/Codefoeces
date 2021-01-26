#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector <int> ans;
    int a=1;
    while(n)
    {
        if(n%10) ans.push_back(n%10*a);
        n/=10;
        a*=10;
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++) cout<< ans[i] <<" ";
    cout<<"\n";
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

