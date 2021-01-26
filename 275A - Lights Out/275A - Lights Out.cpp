#include <bits/stdc++.h>
using namespace std;
int arr[3][3];
void solve()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>arr[i][j];

    ((arr[0][0]+arr[0][1]+arr[1][0])%2==0?cout<<1:cout<<0);
    ((arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1])%2==0?cout<<1:cout<<0);
    ((arr[0][1]+arr[0][2]+arr[1][2])%2==0?cout<<1:cout<<0);
    cout<<"\n";
    ((arr[0][0]+arr[1][0]+arr[2][0]+arr[1][1])%2==0?cout<<1:cout<<0);
    ((arr[1][0]+arr[1][1]+arr[1][2]+arr[0][1]+arr[2][1])%2==0?cout<<1:cout<<0);
    ((arr[1][2]+arr[2][2]+arr[0][2]+arr[1][1])%2==0?cout<<1:cout<<0);
    cout<<"\n";
    ((arr[2][0]+arr[2][1]+arr[1][0])%2==0?cout<<1:cout<<0);
    ((arr[2][0]+arr[2][1]+arr[2][2]+arr[1][1])%2==0?cout<<1:cout<<0);
    ((arr[2][1]+arr[2][2]+arr[1][2])%2==0?cout<<1:cout<<0);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

return 0;
}
