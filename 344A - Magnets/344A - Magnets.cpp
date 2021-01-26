#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,x=0,y=0,res=0;
    bool flag = false;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(x!=y && !flag)
        {
            res++;
            flag=true;
        }
        flag = false;
        y=x;
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

