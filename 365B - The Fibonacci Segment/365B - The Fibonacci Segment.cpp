#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    for(int i=2;i<n;++i)
    {
        if(arr[i] == arr[i-1]+arr[i-2])
            ++counter;
        else
            counter=0;

    }
    cout<<counter;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
