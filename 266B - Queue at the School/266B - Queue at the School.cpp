#include <bits/stdc++.h>
using namespace std;

int n,t;
void solve()
{
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(t--)
    for(int j=0;j<n;j++)
    {
        if(arr[j]=='B' && arr[j+1]=='G')
        {
                arr[j]='G';
                arr[j+1]='B';
                j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
return 0;
}
