#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int r,c,counter=0;
    string str;
    int row[11]={0};
    int column[11]={0};
    cin>>r>>c;
    for(int i=0;i<r;++i)
    {
        cin>>str;
        for(int j=0;j<c;++j)
        if(str[j]=='S')
        {
            row[i] = 1;
            column[j] = 1;
        }
    }
    for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)
            if(row[i] == 0 || column[j]==0)
                ++counter;
    cout<<counter;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}
