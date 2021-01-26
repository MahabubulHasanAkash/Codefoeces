#include <bits/stdc++.h>
using namespace std;
string s1,s2;

void solve()
{
    cin>> s1>>s2;
    int l1=s1.length(),l2=s2.length();
    for(int i=0;i<l1;i++)
    {
        if(s1[i]>=92) s1[i]-=32;
        if(s2[i]>=92) s2[i]-=32;
    }
    if(s1==s2) cout<<0;
    if(s1>s2) cout<<1;
    if(s1<s2) cout<<-1;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

