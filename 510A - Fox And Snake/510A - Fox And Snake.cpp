#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    int m,n;
    bool flag = false;
    cin>>m>>n;
    char matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2==0)
                matrix[i][j] = '#';
            else
                matrix[i][j] = '.';
        }

        if(i%2 != 0)
        {
            if(!flag)
            {
                matrix[i][n-1]='#';
                flag = true;
            }
            else
            {
                matrix[i][0]='#';
                flag = false;
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
return 0;
}

