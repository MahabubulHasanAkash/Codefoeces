#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    string s,t;
    ll   res=0;
    cin>>s>>t;
    for(int i=0;i<t.length();i++){
        if(t[i]==s[res]) res++;
    }
    cout<<++res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

