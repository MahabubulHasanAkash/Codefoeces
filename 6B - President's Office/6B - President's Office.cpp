#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int n,m;
    char c;
    set<char>res;
    cin >> n >> m >> c;
    char mat [n][m];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;j++)
        {
            cin>> mat[i][j];
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==c)
            {
                if (j - 1 >= 0 && mat[i][j - 1] != '.' && mat[i][j - 1] != c)  res.insert( mat[i][j - 1]);
                if (j + 1 < m && mat[i][j + 1] != '.' && mat[i][j + 1] != c) res.insert(mat[i][j + 1]);
                if (i - 1 >= 0 && mat[i - 1][j] != '.' && mat[i - 1][j] != c)  res.insert(mat[i - 1][j]);
                if (i + 1 < n && mat[i + 1][j] != '.' && mat[i + 1][j] != c) res.insert(mat[i + 1][j]);
            }
        }
    }
    cout<<res.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

