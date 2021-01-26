#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,res=1;
	scanf("%d %d",&a,&b);
	for(int i=1;i<=min(a,b);i++)
    {
       res*=i;
    }
    printf("%d",res);
   	return 0;
}
