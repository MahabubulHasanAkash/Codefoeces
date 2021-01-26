#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,h,m,j,k,res=1,counter=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h>>m;
        if(h==j && m==k)
        {
            counter++;
            if(counter>=res) res=counter;
        }
        else counter=1;
        j=h;
        k=m;
    }
     cout<<res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
