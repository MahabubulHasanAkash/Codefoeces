#include <bits/stdc++.h>
using namespace std;
string str;
bool flag=0;
void solve()
{
   cin>>str;
   for(int i=0;i<str.length();i++)
   {
       if( str[i]=='H' || str[i]=='Q' || str[i]=='9' ) flag=1;
   }
   if(flag) cout<<"YES";
   else cout<<"NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

