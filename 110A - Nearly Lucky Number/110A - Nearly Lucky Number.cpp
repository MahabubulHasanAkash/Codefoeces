#include <bits/stdc++.h>
using namespace std;
string ln;
int cnt=0;
void solve()
{
    cin>>ln;
    for(int i=0;i<ln.length();i++)
    {
        if(ln[i]=='4' || ln[i]=='7') cnt++;
    }
    if(cnt<10)
    {
        cout<<(cnt%10==4 || cnt%10==7 ?"YES":"NO");
    }
    if(cnt<100 && cnt>9)
    {
        cout<<(cnt%10==4 || cnt%10==7 && (cnt/10)%10==4 || (cnt/10)%10==7?"YES":"NO");
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
