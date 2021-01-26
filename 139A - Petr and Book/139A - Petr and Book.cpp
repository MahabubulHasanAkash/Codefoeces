#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,arr[7],counter=0,sum=0;
    cin >> n;
    for(int i=0;i<7;++i)
        cin>>arr[i];
    sum = arr[0];
    while(sum<n)
    {
        ++counter;
        counter %= 7;
        sum += arr[counter];
    }
    cout<<counter+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
