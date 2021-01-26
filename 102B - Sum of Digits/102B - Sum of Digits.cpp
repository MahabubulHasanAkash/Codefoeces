#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve()
{
    ll counter=0;
    string input;
    cin>>input;
    ll length = input.length();
    while(length>1)
    {
        ll sum=0;
        for(int i=0;i<length;++i)
        {
            sum += input[i] - '0';
        }
        input = to_string(sum);
        length = input.length();
        ++counter;
    }
    cout << counter;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
