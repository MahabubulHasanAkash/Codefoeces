#include <bits/stdc++.h>
using namespace std;
string str;
void solve()
{
    cin>>str;
    for(int i=0;i<str.length();i+=2)
    {
        for(int j=i+2;j<str.length();j+=2)
        {

            if(str[j]<str[i])
                swap(str[i],str[j]);
        }
    }
    cout<<str;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

