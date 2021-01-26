#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase,n;
    scanf("%d",&tcase);
    while(tcase--)
    {
        scanf("%d",&n);
        if(n<=2)
        {
            printf("0\n");
        }
        else
        {
            if(n%2==0 && n!=0)
                printf("%d\n",n/2-1);
            else
                printf("%d\n",n/2);
        }
    }

}
