#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x,n,m;
    cin>>x>>n>>m;
    while(x>20&&n)n--,x=x/2+10;
    while(x>0&&m)m--,x-=10;
    if(x>0)cout<<("NO\n");
    else cout<<("YES\n");
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testCase;
    scanf("%d",&testCase);
    while(testCase--)
        solve();
    return 0;
}
