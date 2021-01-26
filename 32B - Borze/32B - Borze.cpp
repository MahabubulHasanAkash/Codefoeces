#include <bits/stdc++.h>
using namespace std;


void solve()
{
     string encode;
     cin>>encode;
     for(int i=0;i<encode.length();i++)
     {
         if(encode[i]=='-' && encode[i+1]=='-') i++,cout<<2;
         else if(encode[i]=='-' && encode[i+1]=='.') i++,cout<<1;
         else if(encode[i]=='.' && encode[i+1]=='-') cout<<0;
         else cout<<0;
     }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
