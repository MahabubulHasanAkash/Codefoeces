#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n,x,sum,max,min;
    cin>>n>>x;
    max = min = sum =0;
    int arr[n],ans[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%x==0)
        {
            ans[i] = arr[i]/x;
        }
        else
            ans[i] = (arr[i]/x)+1;
        sum+=arr[i];
        max+=ans[i];
    }
    min = (sum%x==0 ? (sum/x) : (sum/x)+1);
    cout<<min<<" "<<max<<endl;
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

