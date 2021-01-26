#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int s,n;
    bool flag=false;
    cin>>s>>n;
    pair<int,int> a[10000];
    for(int i=0;i<n;++i)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;++i)
    {
        if(s<=a[i].first)
        {
            flag=true;
            break;
        }
        else
        {
            s+=a[i].second;
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

