#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
            cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        if(i==0)
            cout<<arr[i+1]-arr[i]<<" "<<arr[n-1]-arr[i]<<endl;
        else if (i == n - 1)
            cout << arr[i] - arr[i - 1] << " " << arr[i] - arr[0] <<endl ;
        else
            cout<<min((arr[i+1]-arr[i]),(arr[i]-arr[i-1]))<<" "<<max((arr[i]-arr[0]),(arr[n-1]-arr[i]))<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

