#include <bits/stdc++.h>
using namespace std;
string str;
bool flag = false;
int cnt=0;
void solve()
{
    cin>>str;

    sort(str.begin(),str.end());
    str.erase(unique(str.begin(),str.end()),str.end());
    int l=str.length();
    if(l%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

