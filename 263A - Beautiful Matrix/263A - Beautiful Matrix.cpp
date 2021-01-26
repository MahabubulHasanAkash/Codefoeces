#include <bits/stdc++.h>
using namespace std;

int a,p,q,i=5,arr[5][5];
void solve()
{
            for(int i=0;i<5;i++)
                for(int j=0;j<5;j++)
                {
                    cin>>arr[i][j];
                    if(arr[i][j]==1) p=i+1,q=j+1;
                }
    cout<<abs(p-3)+abs(q-3)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
