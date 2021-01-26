#include <bits/stdc++.h>
using namespace std;
int n,m,sumF=0,sumL=0,x,compF=0,compL=0;
void solve()
{
    cin>>n;
    int searchArr[n];
    for(int i=0;i<n;i++) cin>> searchArr[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        for(int i=0;i<n;i++)
        {
           if(searchArr[i]==x)
            sumF+=i+1;
        }
        for(int j=n-1;j>=0;j--)
        {
            if(searchArr[j]==x) cout<<j+1<<" ";

        }

    }


    cout<<sumF<<" "<<sumL;







}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

