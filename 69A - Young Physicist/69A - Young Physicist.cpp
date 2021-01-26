#include<bits/stdc++.h>
#define arr_size 100
using namespace std;
int main()
{
    int x[arr_size],y[arr_size],z[arr_size],sumx=0,sumy=0,sumz=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
    }

    for(int i=0;i<n;i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumz += z[i];

    }
    if(!sumx && !sumy && !sumz)
        printf("YES\n");
    else printf("NO\n");
return 0;
}
