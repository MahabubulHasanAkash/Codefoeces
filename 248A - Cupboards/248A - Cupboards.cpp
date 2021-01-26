#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,l,r,countL=0,countR=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        countL+=l;
        countR+=r;
    }
        cout<< min(n-countL,countL)+min(n-countR,countR);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

