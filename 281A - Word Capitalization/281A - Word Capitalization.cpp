#include <bits/stdc++.h>
using namespace std;
string word;
void solve()
{
    cin>>word;
    if(word[0]>=97 && word[0]<=122)
        word[0]-=32;
    cout<<word;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
