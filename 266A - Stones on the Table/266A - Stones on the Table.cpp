#include <bits/stdc++.h>
using namespace std;
string str;
int cnt=0;
void solve()
{
    cin>>cnt;
    cnt=0;
    cin>>str;
    for(int i=0;i<str.length();i++)
        if(str[i]== str[i+1]) cnt++;
    cout<<cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
