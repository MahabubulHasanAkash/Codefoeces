#include <bits/stdc++.h>
using namespace std;
string str;
void solve()
{
    cin>>str;
    int length = str.length();
    if(length<=10) cout<<str<<"\n";
    else cout<<str[0]<<length-2<<str[length-1]<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
return 0;
}

