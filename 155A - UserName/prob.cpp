#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,mn,mx,amzcnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mn=mx=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
            amzcnt++;
        }
        if(arr[i]>mx)
        {
            mx=arr[i];
            amzcnt++;
        }
    }
    cout<<amzcnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
