#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    string str;
    cin>>str;
    int n= str.length();
    if(str[0]==')' || str[n-1]=='(' || n%2 !=0 )
     {
         cout<<"NO\n";
         return;
     }
    else
    {
        cout<<"YES\n";
         return;
    }

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
