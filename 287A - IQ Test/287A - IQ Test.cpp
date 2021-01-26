#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    bool flag = false;
    char matrix[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<4;i++)
    {
      for(int j=1;i<4;i++)
        {
            if(matrix[i][j] == matrix[i][j+1] && matrix[i][j] == matrix[i+1][j] ) flag = true;
            if(matrix[i][j] == matrix[i][j+1] && matrix[i][j] == matrix[i+1][j+1]) flag= true;
            if(matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i+1][j+1]) flag = true;
            if(matrix[i+1][j] == matrix[i][j+1] && matrix[i+1][j] == matrix[i+1][j+1]) flag =true;

        }
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
